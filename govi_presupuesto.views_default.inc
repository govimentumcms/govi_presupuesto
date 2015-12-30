<?php
/**
 * @file
 * govi_presupuesto.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_presupuesto_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gestion';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gestión';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gestión';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_presupuesto_fecha_exp',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Fecha de expedición */
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['id'] = 'field_presupuesto_fecha_exp';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['table'] = 'field_data_field_presupuesto_fecha_exp';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['field'] = 'field_presupuesto_fecha_exp';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['label'] = '';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['settings'] = array(
    'format_type' => 'anho',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Archivo adjunto */
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['id'] = 'field_presupuesto_adjunto';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['table'] = 'field_data_field_presupuesto_adjunto';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['field'] = 'field_presupuesto_adjunto';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['click_sort_column'] = 'fid';
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['id'] = 'field_presupuesto_periodicidad';
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['table'] = 'field_data_field_presupuesto_periodicidad';
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['field'] = 'field_presupuesto_periodicidad';
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Fecha de expedición (field_presupuesto_fecha_exp) */
  $handler->display->display_options['sorts']['field_presupuesto_fecha_exp_value']['id'] = 'field_presupuesto_fecha_exp_value';
  $handler->display->display_options['sorts']['field_presupuesto_fecha_exp_value']['table'] = 'field_data_field_presupuesto_fecha_exp';
  $handler->display->display_options['sorts']['field_presupuesto_fecha_exp_value']['field'] = 'field_presupuesto_fecha_exp_value';
  $handler->display->display_options['sorts']['field_presupuesto_fecha_exp_value']['order'] = 'DESC';
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
    'presupuesto' => 'presupuesto',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gestion';
  $translatables['gestion'] = array(
    t('Master'),
    t('Gestión'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Archivo adjunto'),
    t('Periodicidad'),
    t('Page'),
  );
  $export['gestion'] = $view;

  return $export;
}
