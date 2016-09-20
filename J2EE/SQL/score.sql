-- phpMyAdmin SQL Dump
-- version 3.5.1
-- http://www.phpmyadmin.net
--
-- Client: localhost
-- Généré le: Mar 20 Septembre 2016 à 22:41
-- Version du serveur: 5.5.24-log
-- Version de PHP: 5.4.3

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Base de données: `tetris`
--

-- --------------------------------------------------------

--
-- Structure de la table `score`
--

CREATE TABLE IF NOT EXISTS `score` (
  `nom` varchar(30) NOT NULL,
  `niveau` int(10) NOT NULL,
  `score` int(255) NOT NULL,
  `id_joueur` int(255) NOT NULL AUTO_INCREMENT,
  PRIMARY KEY (`id_joueur`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=130 ;

--
-- Contenu de la table `score`
--

INSERT INTO `score` (`nom`, `niveau`, `score`, `id_joueur`) VALUES
('Ordinateur Or', 1, 600, 1),
('Ordinateur Argent', 1, 400, 2),
('Ordinateur Bronze', 1, 250, 3),
('Ordinateur Debutant', 1, 150, 4),
('Ordinateur UltraSimple', 1, 50, 5);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
