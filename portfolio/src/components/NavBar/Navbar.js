import React from "react";
import "./Navbar.css";
import logo from "../../assets/logo.png";
import { Link } from "react-scroll";
import contactImg from '../../assets/contact.png'

const Navbar = () => {
  return (
    <nav className="navbar">
      <img src={logo} alt="Logo" className="logo" />
      <div className="desktopMenu">
        <Link to="" className="desktopMenuListItem">Home</Link>
        <Link to="" className="desktopMenuListItem">About</Link>
        <Link to="" className="desktopMenuListItem">Portfolio</Link>
        <Link to="" className="desktopMenuListItem">Clients</Link>
      </div>
      <button className="desktopMenuBtn">
        <img src={contactImg} alt="" className="desktopMenuImg" />
        Contact me
      </button>
    </nav>
  );
};

export default Navbar;
