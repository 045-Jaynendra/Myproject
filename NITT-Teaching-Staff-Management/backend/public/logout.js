// script.js

document.addEventListener("DOMContentLoaded", function() {
    const token = localStorage.getItem("token");

    if (token) {
        const loginLink = document.getElementById("loginLink");
        const logoutButton = document.createElement("button");

        logoutButton.innerText = "Logout";
        logoutButton.className = "navigate";
        logoutButton.addEventListener("click", function() {
            localStorage.removeItem("token");
            window.location.href = "./login.html";
        });

        loginLink.innerHTML = "";
        loginLink.appendChild(logoutButton);
    }
});
