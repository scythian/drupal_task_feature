<?php
/**
 * @file
 * drupaltask.features.inc
 */

/**
 * Implements hook_views_api().
 */
function drupaltask_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drupaltask_node_info() {
  $items = array(
    'twitter' => array(
      'name' => t('Twitter'),
      'base' => 'node_content',
      'description' => t('Twitter Content Type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
