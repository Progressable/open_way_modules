<?php
/**
 * @file
 * open_way_configuration_images_styles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function open_way_configuration_images_styles_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function open_way_configuration_images_styles_image_default_styles() {
  $styles = array();

  // Exported image style: ow_large-rectangle
  $styles['ow_large-rectangle'] = array(
    'name' => 'ow_large-rectangle',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '620',
          'height' => '350',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: ow_large-rectangle-rounded
  $styles['ow_large-rectangle-rounded'] = array(
    'name' => 'ow_large-rectangle-rounded',
    'effects' => array(
      11 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '225',
          'height' => '225',
        ),
        'weight' => '1',
      ),
      12 => NULL,
      13 => NULL,
    ),
  );

  // Exported image style: ow_larger-rectangle
  $styles['ow_larger-rectangle'] = array(
    'name' => 'ow_larger-rectangle',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '800',
          'height' => '800',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: ow_medium-rectangle-rounded
  $styles['ow_medium-rectangle-rounded'] = array(
    'name' => 'ow_medium-rectangle-rounded',
    'effects' => array(
      32 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '260',
          'height' => '150',
        ),
        'weight' => '1',
      ),
      33 => NULL,
      34 => NULL,
    ),
  );

  // Exported image style: ow_medium-square-rounded
  $styles['ow_medium-square-rounded'] = array(
    'name' => 'ow_medium-square-rounded',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '300',
          'height' => '300',
        ),
        'weight' => '-10',
      ),
      7 => NULL,
      8 => NULL,
    ),
  );

  // Exported image style: ow_small-rectangle
  $styles['ow_small-rectangle'] = array(
    'name' => 'ow_small-rectangle',
    'effects' => array(
      18 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '210',
          'height' => '120',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: ow_small-rectangle-rounded
  $styles['ow_small-rectangle-rounded'] = array(
    'name' => 'ow_small-rectangle-rounded',
    'effects' => array(
      20 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '175',
          'height' => '150',
        ),
        'weight' => '-10',
      ),
      22 => NULL,
      21 => NULL,
    ),
  );

  // Exported image style: ow_small-square-rounded
  $styles['ow_small-square-rounded'] = array(
    'name' => 'ow_small-square-rounded',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '150',
          'height' => '150',
        ),
        'weight' => '-10',
      ),
      9 => NULL,
      10 => NULL,
    ),
  );

  // Exported image style: ow_smaller-square-rounded
  $styles['ow_smaller-square-rounded'] = array(
    'name' => 'ow_smaller-square-rounded',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '100',
          'height' => '100',
        ),
        'weight' => '-10',
      ),
      5 => NULL,
      6 => NULL,
    ),
  );

  return $styles;
}
