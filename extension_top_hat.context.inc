<?php
/**
 * @file
 * extension_top_hat.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function extension_top_hat_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'extension_top_hat';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~node/*/edit' => '~node/*/edit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'extension_top_hat-extension_top_hat' => array(
          'module' => 'extension_top_hat',
          'delta' => 'extension_top_hat',
          'region' => 'top',
          'weight' => '-10',
        ),
        'extension_top_hat-extension_top_hat_links' => array(
          'module' => 'extension_top_hat',
          'delta' => 'extension_top_hat_links',
          'region' => 'top',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['extension_top_hat'] = $context;

  return $export;
}
