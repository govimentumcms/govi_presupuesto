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
  $view->name = 'presupuesto';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Presupuesto';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Presupuesto General';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_presupuesto_fecha_exp',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Archivo adjunto */
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['id'] = 'field_presupuesto_adjunto';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['table'] = 'field_data_field_presupuesto_adjunto';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['field'] = 'field_presupuesto_adjunto';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['click_sort_column'] = 'fid';
  /* Field: Content: Clasificación */
  $handler->display->display_options['fields']['field_presupuesto_clasificacion']['id'] = 'field_presupuesto_clasificacion';
  $handler->display->display_options['fields']['field_presupuesto_clasificacion']['table'] = 'field_data_field_presupuesto_clasificacion';
  $handler->display->display_options['fields']['field_presupuesto_clasificacion']['field'] = 'field_presupuesto_clasificacion';
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_presupuesto_descripcion']['id'] = 'field_presupuesto_descripcion';
  $handler->display->display_options['fields']['field_presupuesto_descripcion']['table'] = 'field_data_field_presupuesto_descripcion';
  $handler->display->display_options['fields']['field_presupuesto_descripcion']['field'] = 'field_presupuesto_descripcion';
  /* Field: Content: Fecha de expedición */
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['id'] = 'field_presupuesto_fecha_exp';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['table'] = 'field_data_field_presupuesto_fecha_exp';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['field'] = 'field_presupuesto_fecha_exp';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['settings'] = array(
    'format_type' => 'anho',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['id'] = 'field_presupuesto_periodicidad';
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['table'] = 'field_data_field_presupuesto_periodicidad';
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['field'] = 'field_presupuesto_periodicidad';
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
    'presupuesto' => 'presupuesto',
  );

  /* Display: Presupuesto */
  $handler = $view->new_display('page', 'Presupuesto', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Presupuesto';
  $handler->display->display_options['path'] = 'transparencia/presupuesto';

  /* Display: Presupuesto General */
  $handler = $view->new_display('page', 'Presupuesto General', 'page_1');
  $handler->display->display_options['path'] = 'transparencia/presupuesto/general';

  /* Display: Ejecución Presupuestal */
  $handler = $view->new_display('page', 'Ejecución Presupuestal', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ejecución Presupuestal';
  $handler->display->display_options['path'] = 'transparencia/presupuesto/ejecucion-presupuestal';

  /* Display: Estados Financieros */
  $handler = $view->new_display('page', 'Estados Financieros', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Estados Financieros';
  $handler->display->display_options['path'] = 'transparencia/presupuesto/estados-financieros';
  $translatables['presupuesto'] = array(
    t('Master'),
    t('Presupuesto General'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Archivo adjunto'),
    t('Clasificación'),
    t('Descripción'),
    t('Fecha de expedición'),
    t('Periodicidad'),
    t('Presupuesto'),
    t('Ejecución Presupuestal'),
    t('Estados Financieros'),
  );
  $export['presupuesto'] = $view;

  return $export;
}
