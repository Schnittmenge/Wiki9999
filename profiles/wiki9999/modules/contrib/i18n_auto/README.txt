
Auto Translate
==============

Authors: Aaron Winborn, Greg Harvey
Creation Date: Begun June 1, 2007

Contact: aaron (at) advomatic (dot) com, greg (dot) harvey (at) gmail (dot) com

Drupal 6.x
==========

This module will automatically translate any new source language node
in to all available languages, using the Google AJAX API for Translation.
It depends upon i18n, Rules and the GTranslate PHP wrapper for the
Google AJAX API.

Installing

(0)
If you don't already have it, download the rules module and extract to sites/all/modules
  http://drupal.org/project/rules

(1)
Extract i18n_auto module to sites/all/modules

(2)
Download the latest GTranslate PHP library from:
  http://code.google.com/p/gtranslate-api-php/downloads/list
and extract the contents

Or, if you would prefer, get the code directly from SVN by following the instructions here:
  http://gtranslate-api-php.googlecode.com/svn/trunk/

(3)
Copy the files into sites/all/modules/i18n_auto/gtranslate-api-php

(4)
Enable the "Auto draft translation" module

(5)
Position the Google branding block in a region to avoid getting banned by Google. See:
http://drupal.org/node/761376

At this time there are no settings. A rule is automatically enabled to manage the 
translations. You may edit the rule/create your own rules to manage how your auto-
translations are generated. The provided Rules action is called "Translate a node into 
every enabled language" and is in the Node actions.  If you can not find the Rules 
administration tools, ensure that the module "Rules Administration UI" has been enabled!

Drupal 5.x
==========

This module, in conjunction with the Internationalization (i18n) module, will add a 
button to the translation edit pages of nodes, that when pressed, will fill in an empty 
textarea with the preset translated text of the node to a specified language. It may 
also be configured to translate the text already in any specified textarea(s).

Please be aware that the current state of the art of automatic translation tools are poor 
at best. This will hopefully change in the  future, but until then, this module attempts 
to make things easier for editors and translators. I strongly suggest that you edit any 
translated text manually after the automatic grab, unless you want to risk public 
humiliation for your web site and an increase in the incidence of personal ninja attacks.

I18N Auto Translate scrapes the pages from pre-configured third-party providers. Before 
using, please peruse their terms of service, as I take no legal responsibility for this 
use of their services. To attempt to stay within any reasonable interpretation of Fair
Use, the module will only translate text within a form to be submitted (rather than 
translating on the fly, which would abuse the servers of the third party and slow down 
your site to boot), and will also display the links and/or logo(s) of the third party 
translators configured to be used by the module on the content submission pages.

If anyone is aware of other automatic translation servers, or (especially) any freely 
available API's, please, please, contact me so we can include them (or write a patch 
yourself).

The module makes use of include files to allow easy addition of new third party translation 
servers as they become available. The module provides several hooks for the translation 
process.
