

export const handleLogin = document.getElementById("loginButton");
if(handleLogin) {
    handleLogin.addEventListener("click", async(event)=>
    {
        const form =document.getElementById("loginForm");
        const webmail = form.elements.webmail.value;
        const password = form.elements.password.value;

        console.log(form);
        try{
            const response = await fetch("http://localhost:5001/api/staff/login",{
                method: "POST",
                headers: {
                    "Content-Type" :"application/json",
                },
                body: JSON.stringify({
                    webmail: webmail,
                    password: password,
                }),
            });
            console.log(response);
            const data = await response.json();
            console.log(data.massage)
            console.log(data.token)
            if(response.status === 200)
                {
                    alert("Successfully logged in");
                    localStorage.setItem("token", data.token);
                    window.location.href="/empDetails.html";
                }
                else
                {
                    alert("error: " + data.massage);
                }
                
             }
    catch(error){
        console.log(error);
    }
});

}

