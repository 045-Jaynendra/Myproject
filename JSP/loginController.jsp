<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
  <head>
    <title>Login Controller</title>
  </head>
  <body>
    <% 
      String username = request.getParameter("username");
      String password = request.getParameter("password");
      
      // Your authentication logic goes here
      
      if (/* authentication successful */) {
        // Redirect to the home page
        response.sendRedirect("home.jsp");
      } else {
        // Show an error message and ask the user to try again
        out.print("Invalid username or password. Please try again.");
      }
    %>
  </body>
</html>
