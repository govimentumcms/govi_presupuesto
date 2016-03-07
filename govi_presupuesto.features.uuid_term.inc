<?php
/**
 * @file
 * govi_presupuesto.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function govi_presupuesto_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Mensual',
    'description' => 'termino Mensual de la categoria periodicidad',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '30d64f77-5eb9-48dc-9eef-ad39b71119cb',
    'vocabulary_machine_name' => 'periodicidad',
  );
  $terms[] = array(
    'name' => 'Cuatrienal',
    'description' => 'termino Cuatrienal de la categoria periodicidad',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '35ef5247-9ea4-4b72-adf6-8609fb98c7f1',
    'vocabulary_machine_name' => 'periodicidad',
  );
  $terms[] = array(
    'name' => 'Anual',
    'description' => 'termino Anual de la categoria periodicidad',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '49c8c286-ab20-4a27-880d-ec46162064af',
    'vocabulary_machine_name' => 'periodicidad',
  );
  $terms[] = array(
    'name' => 'Presupuesto general',
    'description' => 'termino Presupuesto general de la categoria Presupuesto Clasificación',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5eb27c34-d722-4a9b-94ad-90c4f8c2c16f',
    'vocabulary_machine_name' => 'presupuesto_clasificacion',
  );
  $terms[] = array(
    'name' => 'Semestral',
    'description' => 'termino Semestral de la categoria periodicidad',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '627ce045-131b-45e1-80c3-bc718eaaed0e',
    'vocabulary_machine_name' => 'periodicidad',
  );
  $terms[] = array(
    'name' => 'Cuatrimestral',
    'description' => 'termino Cuatrimestral de la categoria periodicidad',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7301a6e1-0f02-4295-abd4-d5df29bb9a5b',
    'vocabulary_machine_name' => 'periodicidad',
  );
  $terms[] = array(
    'name' => 'Bimensual',
    'description' => 'termino Bimensual de la categoria periodicidad',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '735efa52-6ce8-48c2-a6ec-78e5ed447b7a',
    'vocabulary_machine_name' => 'periodicidad',
  );
  $terms[] = array(
    'name' => 'Estados financieros',
    'description' => 'termino Estados financieros de la categoria Presupuesto Clasificación',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '80774c5f-cce9-468c-b96e-05c6aa5e8104',
    'vocabulary_machine_name' => 'presupuesto_clasificacion',
  );
  $terms[] = array(
    'name' => 'Ejecución presupuestal',
    'description' => 'termino Ejecución presupuestal de la categoria Presupuesto Clasificación',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8e8bc56b-008e-4bf6-8725-4fdc35ff8af1',
    'vocabulary_machine_name' => 'presupuesto_clasificacion',
  );
  $terms[] = array(
    'name' => 'Diaria',
    'description' => 'termino Diaria de la categoria periodicidad',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b66c952b-6939-4f22-9500-0256ef0d22ae',
    'vocabulary_machine_name' => 'periodicidad',
  );
  $terms[] = array(
    'name' => 'Semanal',
    'description' => 'termino Semanal de la categoria periodicidad',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ca816409-b819-4d9f-98b2-0696f8e3d744',
    'vocabulary_machine_name' => 'periodicidad',
  );
  $terms[] = array(
    'name' => 'Trimestral',
    'description' => 'termino Trimestral de la categoria periodicidad',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fb80e286-d8e0-406b-85d8-003b942eb85f',
    'vocabulary_machine_name' => 'periodicidad',
  );
  return $terms;
}
