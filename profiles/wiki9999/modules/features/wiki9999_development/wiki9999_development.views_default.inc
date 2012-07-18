<?php
/**
 * @file
 * wiki9999_development.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wiki9999_development_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'all_opinions_of_a_website';
  $view->description = 'All Standpoints of a website';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All opinions of a website';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All opinions of a website';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'opinion' => 'opinion',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-opinions-of-a-website';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'all-opinions-of-a-website.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $translatables['all_opinions_of_a_website'] = array(
    t('Master'),
    t('All opinions of a website'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Feed'),
  );
  $export['all_opinions_of_a_website'] = $view;

  $view = new view;
  $view->name = 'all_proposals_of_a_website';
  $view->description = 'All Standpoints of a website';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All proposals of a website';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All proposals of a website';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposal' => 'proposal',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-proposals-of-a-website';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'all-proposals-of-a-website.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $translatables['all_proposals_of_a_website'] = array(
    t('Master'),
    t('All proposals of a website'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Feed'),
  );
  $export['all_proposals_of_a_website'] = $view;

  $view = new view;
  $view->name = 'all_standpoints_of_a_website';
  $view->description = 'All Standpoints of a website';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All standpoints of a website';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All standpoints of a website';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'standpoint' => 'standpoint',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-standpoints-of-a-website';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'all-standpoints-of-a-website.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $translatables['all_standpoints_of_a_website'] = array(
    t('Master'),
    t('All standpoints of a website'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Feed'),
  );
  $export['all_standpoints_of_a_website'] = $view;

  $view = new view;
  $view->name = 'all_topic_of_a_website_in_json';
  $view->description = 'All topics in json with the views datasource module';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All topic of a website in json';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'list';
  $handler->display->display_options['style_options']['top_child_object'] = 'item';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_language']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_language']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_language']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_language']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_language']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_language']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_language']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_language']['field_api_classes'] = 0;
  /* Field: Content: Legal rights */
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['id'] = 'field_legal_rights_taxonomy';
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['table'] = 'field_data_field_legal_rights_taxonomy';
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['field'] = 'field_legal_rights_taxonomy';
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['field_api_classes'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tags']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tags']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tags']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tags']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tags']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tags']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tags']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_tags']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_tags']['field_api_classes'] = 0;
  /* Field: Content: Topic id */
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['id'] = 'field_topic_id_taxonomy';
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['table'] = 'field_data_field_topic_id_taxonomy';
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['field'] = 'field_topic_id_taxonomy';
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['field_api_classes'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Field: Content: Website Source */
  $handler->display->display_options['fields']['field_website_source']['id'] = 'field_website_source';
  $handler->display->display_options['fields']['field_website_source']['table'] = 'field_data_field_website_source';
  $handler->display->display_options['fields']['field_website_source']['field'] = 'field_website_source';
  $handler->display->display_options['fields']['field_website_source']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_website_source']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_website_source']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_website_source']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_website_source']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_website_source']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_website_source']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_website_source']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_website_source']['field_api_classes'] = 0;
  /* Field: Content translation: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['language']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['language']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['language']['alter']['external'] = 0;
  $handler->display->display_options['fields']['language']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['language']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['language']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['language']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['language']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['language']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['language']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['language']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['language']['alter']['html'] = 0;
  $handler->display->display_options['fields']['language']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['language']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['language']['hide_empty'] = 0;
  $handler->display->display_options['fields']['language']['empty_zero'] = 0;
  $handler->display->display_options['fields']['language']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['language']['link_to_node'] = 0;
  $handler->display->display_options['fields']['language']['native_language'] = 0;
  /* Field: Content: Publisher homepage */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_publisher']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_publisher']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_publisher']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_publisher']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_publisher']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_publisher']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_publisher']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_publisher']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'topic' => 'topic',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'all-topics-of-a-website-in-json';
  $translatables['all_topic_of_a_website_in_json'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Body'),
    t('Language'),
    t('Legal rights'),
    t('Post date'),
    t('Tags'),
    t('Topic id'),
    t('Type'),
    t('Updated date'),
    t('Website Source'),
    t('Publisher homepage'),
    t('Page'),
  );
  $export['all_topic_of_a_website_in_json'] = $view;

  $view = new view;
  $view->name = 'all_topic_of_a_website_in_rdf';
  $view->description = 'All topics in rdf with the views datasource module';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All topic of a website in rdf';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_rdf';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['escape_as_CDATA'] = 'yes';
  $handler->display->display_options['style_options']['header'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_language']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_language']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_language']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_language']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_language']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_language']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_language']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_language']['field_api_classes'] = 0;
  /* Field: Content: Legal rights */
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['id'] = 'field_legal_rights_taxonomy';
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['table'] = 'field_data_field_legal_rights_taxonomy';
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['field'] = 'field_legal_rights_taxonomy';
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['field_api_classes'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tags']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tags']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tags']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tags']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tags']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tags']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tags']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_tags']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_tags']['field_api_classes'] = 0;
  /* Field: Content: Topic id */
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['id'] = 'field_topic_id_taxonomy';
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['table'] = 'field_data_field_topic_id_taxonomy';
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['field'] = 'field_topic_id_taxonomy';
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['field_api_classes'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Field: Content: Website Source */
  $handler->display->display_options['fields']['field_website_source']['id'] = 'field_website_source';
  $handler->display->display_options['fields']['field_website_source']['table'] = 'field_data_field_website_source';
  $handler->display->display_options['fields']['field_website_source']['field'] = 'field_website_source';
  $handler->display->display_options['fields']['field_website_source']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_website_source']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_website_source']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_website_source']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_website_source']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_website_source']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_website_source']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_website_source']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_website_source']['field_api_classes'] = 0;
  /* Field: Content translation: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['language']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['language']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['language']['alter']['external'] = 0;
  $handler->display->display_options['fields']['language']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['language']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['language']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['language']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['language']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['language']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['language']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['language']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['language']['alter']['html'] = 0;
  $handler->display->display_options['fields']['language']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['language']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['language']['hide_empty'] = 0;
  $handler->display->display_options['fields']['language']['empty_zero'] = 0;
  $handler->display->display_options['fields']['language']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['language']['link_to_node'] = 0;
  $handler->display->display_options['fields']['language']['native_language'] = 0;
  /* Field: Content: Publisher homepage */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_publisher']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_publisher']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_publisher']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_publisher']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_publisher']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_publisher']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_publisher']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_publisher']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'topic' => 'topic',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'all-topics-of-a-website-in-rdf';
  $translatables['all_topic_of_a_website_in_rdf'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Body'),
    t('Language'),
    t('Legal rights'),
    t('Post date'),
    t('Tags'),
    t('Topic id'),
    t('Type'),
    t('Updated date'),
    t('Website Source'),
    t('Publisher homepage'),
    t('Page'),
  );
  $export['all_topic_of_a_website_in_rdf'] = $view;

  $view = new view;
  $view->name = 'all_topics_of_a_website';
  $view->description = 'All Standpoints of a website';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All topics of a website';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All topics of a website';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'topic' => 'topic',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-topics-of-a-website';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'all-topics-of-a-website.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $translatables['all_topics_of_a_website'] = array(
    t('Master'),
    t('All topics of a website'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Feed'),
  );
  $export['all_topics_of_a_website'] = $view;

  $view = new view;
  $view->name = 'clone_of_all_topic_of_a_website_in_xml';
  $view->description = 'All topics in xml with the views datasource module';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All topic of a website in xml';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_xml_style';
  $handler->display->display_options['style_options']['root_element'] = 'list';
  $handler->display->display_options['style_options']['top_child_object'] = 'item';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['header'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_language']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_language']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_language']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_language']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_language']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_language']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_language']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_language']['field_api_classes'] = 0;
  /* Field: Content: Legal rights */
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['id'] = 'field_legal_rights_taxonomy';
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['table'] = 'field_data_field_legal_rights_taxonomy';
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['field'] = 'field_legal_rights_taxonomy';
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_legal_rights_taxonomy']['field_api_classes'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tags']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tags']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tags']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tags']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tags']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tags']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tags']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tags']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_tags']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_tags']['field_api_classes'] = 0;
  /* Field: Content: Topic id */
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['id'] = 'field_topic_id_taxonomy';
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['table'] = 'field_data_field_topic_id_taxonomy';
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['field'] = 'field_topic_id_taxonomy';
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_topic_id_taxonomy']['field_api_classes'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Field: Content: Website Source */
  $handler->display->display_options['fields']['field_website_source']['id'] = 'field_website_source';
  $handler->display->display_options['fields']['field_website_source']['table'] = 'field_data_field_website_source';
  $handler->display->display_options['fields']['field_website_source']['field'] = 'field_website_source';
  $handler->display->display_options['fields']['field_website_source']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_website_source']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_website_source']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_website_source']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_website_source']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_website_source']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_website_source']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_website_source']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_website_source']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_website_source']['field_api_classes'] = 0;
  /* Field: Content translation: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['language']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['language']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['language']['alter']['external'] = 0;
  $handler->display->display_options['fields']['language']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['language']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['language']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['language']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['language']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['language']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['language']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['language']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['language']['alter']['html'] = 0;
  $handler->display->display_options['fields']['language']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['language']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['language']['hide_empty'] = 0;
  $handler->display->display_options['fields']['language']['empty_zero'] = 0;
  $handler->display->display_options['fields']['language']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['language']['link_to_node'] = 0;
  $handler->display->display_options['fields']['language']['native_language'] = 0;
  /* Field: Content: Publisher homepage */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_publisher']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_publisher']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_publisher']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_publisher']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_publisher']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_publisher']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_publisher']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_publisher']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_publisher']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'topic' => 'topic',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'all-topics-of-a-website-in-xml';
  $translatables['clone_of_all_topic_of_a_website_in_xml'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Body'),
    t('Language'),
    t('Legal rights'),
    t('Post date'),
    t('Tags'),
    t('Topic id'),
    t('Type'),
    t('Updated date'),
    t('Website Source'),
    t('Publisher homepage'),
    t('Page'),
  );
  $export['clone_of_all_topic_of_a_website_in_xml'] = $view;

  return $export;
}
