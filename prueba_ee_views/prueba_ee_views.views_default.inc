<?php
/**
 * @file
 * prueba_ee_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function prueba_ee_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'test_el_espectador';
  $view->human_name = 'report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer site configuration';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'person_id' => 'person_id',
    'birth_date' => 'birth_date',
    'last_name' => 'last_name',
    'first_name' => 'first_name',
    'wage_aspiration' => 'wage_aspiration',
    'work_summary' => 'work_summary',
    'php' => 'php',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'person_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'birth_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'wage_aspiration' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'work_summary' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Aspirant Record Table: Aspirant Id */
  $handler->display->display_options['fields']['person_id']['id'] = 'person_id';
  $handler->display->display_options['fields']['person_id']['table'] = 'test_el_espectador';
  $handler->display->display_options['fields']['person_id']['field'] = 'person_id';
  /* Field: Aspirant Record Table: Aspirant first name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'test_el_espectador';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  /* Field: Aspirant Record Table: Aspirant last name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'test_el_espectador';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Age';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$age = date("Y",time()) - date("Y",$row->birth_date);
echo ($age);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Aspirant Record Table: Aspirant wage aspiration */
  $handler->display->display_options['fields']['wage_aspiration']['id'] = 'wage_aspiration';
  $handler->display->display_options['fields']['wage_aspiration']['table'] = 'test_el_espectador';
  $handler->display->display_options['fields']['wage_aspiration']['field'] = 'wage_aspiration';
  /* Field: Aspirant Record Table: Aspirant Work sumary */
  $handler->display->display_options['fields']['work_summary']['id'] = 'work_summary';
  $handler->display->display_options['fields']['work_summary']['table'] = 'test_el_espectador';
  $handler->display->display_options['fields']['work_summary']['field'] = 'work_summary';
  /* Field: Aspirant Record Table: Aspirant Brith date */
  $handler->display->display_options['fields']['birth_date']['id'] = 'birth_date';
  $handler->display->display_options['fields']['birth_date']['table'] = 'test_el_espectador';
  $handler->display->display_options['fields']['birth_date']['field'] = 'birth_date';
  $handler->display->display_options['fields']['birth_date']['label'] = 'Aspirant Birth date';
  $handler->display->display_options['fields']['birth_date']['exclude'] = TRUE;
  /* Filter criterion: Aspirant Record Table: Aspirant Id */
  $handler->display->display_options['filters']['person_id']['id'] = 'person_id';
  $handler->display->display_options['filters']['person_id']['table'] = 'test_el_espectador';
  $handler->display->display_options['filters']['person_id']['field'] = 'person_id';
  $handler->display->display_options['filters']['person_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['person_id']['expose']['operator_id'] = 'person_id_op';
  $handler->display->display_options['filters']['person_id']['expose']['label'] = 'Aspirant Id';
  $handler->display->display_options['filters']['person_id']['expose']['operator'] = 'person_id_op';
  $handler->display->display_options['filters']['person_id']['expose']['identifier'] = 'person_id';
  $handler->display->display_options['filters']['person_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Aspirant Record Table: Aspirant last name */
  $handler->display->display_options['filters']['last_name']['id'] = 'last_name';
  $handler->display->display_options['filters']['last_name']['table'] = 'test_el_espectador';
  $handler->display->display_options['filters']['last_name']['field'] = 'last_name';
  $handler->display->display_options['filters']['last_name']['operator'] = 'word';
  $handler->display->display_options['filters']['last_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['last_name']['expose']['operator_id'] = 'last_name_op';
  $handler->display->display_options['filters']['last_name']['expose']['label'] = 'Aspirant last name';
  $handler->display->display_options['filters']['last_name']['expose']['operator'] = 'last_name_op';
  $handler->display->display_options['filters']['last_name']['expose']['identifier'] = 'last_name';
  $handler->display->display_options['filters']['last_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Aspirant Record Table: Aspirant first name */
  $handler->display->display_options['filters']['first_name']['id'] = 'first_name';
  $handler->display->display_options['filters']['first_name']['table'] = 'test_el_espectador';
  $handler->display->display_options['filters']['first_name']['field'] = 'first_name';
  $handler->display->display_options['filters']['first_name']['operator'] = 'word';
  $handler->display->display_options['filters']['first_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['first_name']['expose']['operator_id'] = 'first_name_op';
  $handler->display->display_options['filters']['first_name']['expose']['label'] = 'Aspirant first name';
  $handler->display->display_options['filters']['first_name']['expose']['operator'] = 'first_name_op';
  $handler->display->display_options['filters']['first_name']['expose']['identifier'] = 'first_name';
  $handler->display->display_options['filters']['first_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'report';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'report';
  $export['report'] = $view;

  return $export;
}
