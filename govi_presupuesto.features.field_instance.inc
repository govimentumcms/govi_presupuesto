<?php
/**
 * @file
 * govi_presupuesto.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function govi_presupuesto_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-presupuesto-field_presupuesto_adjunto'.
  $field_instances['node-presupuesto-field_presupuesto_adjunto'] = array(
    'bundle' => 'presupuesto',
    'deleted' => 0,
    'description' => 'Archivo que contiene el informe detallado del presupuesto, plan, estrategia, metas y/o mecanismos de supervisión, notificación y vigilancia',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_presupuesto_adjunto',
    'label' => 'Archivo adjunto',
    'required' => 1,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'presupuesto',
      'file_extensions' => 'pdf xls xlsx odt odf doc docx',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-presupuesto-field_presupuesto_fecha_exp'.
  $field_instances['node-presupuesto-field_presupuesto_fecha_exp'] = array(
    'bundle' => 'presupuesto',
    'deleted' => 0,
    'description' => 'Fecha a la que pertenece la expedición o publicación del informe. Esta servirá para organizar los registros por año en la presentación del presupuesto de la Entidad',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_presupuesto_fecha_exp',
    'label' => 'Fecha de expedición',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-presupuesto-field_presupuesto_periodicidad'.
  $field_instances['node-presupuesto-field_presupuesto_periodicidad'] = array(
    'bundle' => 'presupuesto',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indique el periodo al que corresponde la publicación o notificación del informe',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_presupuesto_periodicidad',
    'label' => 'Periodicidad',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-presupuesto-field_presupuesto_tags'.
  $field_instances['node-presupuesto-field_presupuesto_tags'] = array(
    'bundle' => 'presupuesto',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_presupuesto_tags',
    'label' => 'Tags',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Archivo adjunto');
  t('Archivo que contiene el informe detallado del presupuesto, plan, estrategia, metas y/o mecanismos de supervisión, notificación y vigilancia');
  t('Fecha a la que pertenece la expedición o publicación del informe. Esta servirá para organizar los registros por año en la presentación del presupuesto de la Entidad');
  t('Fecha de expedición');
  t('Indique el periodo al que corresponde la publicación o notificación del informe');
  t('Periodicidad');
  t('Tags');

  return $field_instances;
}
