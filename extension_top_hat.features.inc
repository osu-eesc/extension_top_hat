<?php
/**
 * @file
 * extension_top_hat.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function extension_top_hat_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
