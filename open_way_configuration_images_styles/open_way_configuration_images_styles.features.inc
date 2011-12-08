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

  // Exported image style: front_page_small_feature_box
  $styles['front_page_small_feature_box'] = array(
    'name' => 'front_page_small_feature_box',
    'effects' => array(
      16 => NULL,
      17 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '233',
          'height' => '131',
        ),
        'weight' => '2',
      ),
      18 => NULL,
      19 => NULL,
    ),
  );

  // Exported image style: larger
  $styles['larger'] = array(
    'name' => 'larger',
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

  // Exported image style: rounded-rectangle-large
  $styles['rounded-rectangle-large'] = array(
    'name' => 'rounded-rectangle-large',
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
          'width' => '640',
          'height' => '360',
        ),
        'weight' => '1',
      ),
      7 => NULL,
    ),
  );

  // Exported image style: rounded-rectangle-medium-long
  $styles['rounded-rectangle-medium-long'] = array(
    'name' => 'rounded-rectangle-medium-long',
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

  // Exported image style: rounded-rectangle-small
  $styles['rounded-rectangle-small'] = array(
    'name' => 'rounded-rectangle-small',
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

  // Exported image style: rounded-square-medium
  $styles['rounded-square-medium'] = array(
    'name' => 'rounded-square-medium',
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
      7 => array(
        'label' => 'Change file format',
        'help' => 'Choose to save the image as a different filetype.',
        'effect callback' => 'coloractions_convert_image',
        'form callback' => 'coloractions_convert_form',
        'summary theme' => 'coloractions_convert_summary',
        'module' => 'imagecache_coloractions',
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => '75',
        ),
        'weight' => '2',
      ),
      8 => array(
        'label' => 'Rounded Corners',
        'help' => 'This is true cropping, not overlays, so the result <em>can</em> be transparent.',
        'effect callback' => 'canvasactions_roundedcorners_image',
        'form callback' => 'canvasactions_roundedcorners_form',
        'summary theme' => 'canvasactions_roundedcorners_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_roundedcorners',
        'data' => array(
          'radius' => '5',
          'independent_corners_set' => array(
            'independent_corners' => 0,
            'radii' => array(
              'tl' => 0,
              'tr' => 0,
              'bl' => 0,
              'br' => 0,
            ),
          ),
        ),
        'weight' => '3',
      ),
    ),
  );

  // Exported image style: rounded-square-small
  $styles['rounded-square-small'] = array(
    'name' => 'rounded-square-small',
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
      9 => array(
        'label' => 'Change file format',
        'help' => 'Choose to save the image as a different filetype.',
        'effect callback' => 'coloractions_convert_image',
        'form callback' => 'coloractions_convert_form',
        'summary theme' => 'coloractions_convert_summary',
        'module' => 'imagecache_coloractions',
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => '75',
        ),
        'weight' => '2',
      ),
      10 => array(
        'label' => 'Rounded Corners',
        'help' => 'This is true cropping, not overlays, so the result <em>can</em> be transparent.',
        'effect callback' => 'canvasactions_roundedcorners_image',
        'form callback' => 'canvasactions_roundedcorners_form',
        'summary theme' => 'canvasactions_roundedcorners_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_roundedcorners',
        'data' => array(
          'radius' => '5',
          'independent_corners_set' => array(
            'independent_corners' => 0,
            'radii' => array(
              'tl' => 0,
              'tr' => 0,
              'bl' => 0,
              'br' => 0,
            ),
          ),
        ),
        'weight' => '3',
      ),
    ),
  );

  // Exported image style: rounded-square-smaller
  $styles['rounded-square-smaller'] = array(
    'name' => 'rounded-square-smaller',
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
      5 => array(
        'label' => 'Change file format',
        'help' => 'Choose to save the image as a different filetype.',
        'effect callback' => 'coloractions_convert_image',
        'form callback' => 'coloractions_convert_form',
        'summary theme' => 'coloractions_convert_summary',
        'module' => 'imagecache_coloractions',
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => '75',
        ),
        'weight' => '2',
      ),
      6 => array(
        'label' => 'Rounded Corners',
        'help' => 'This is true cropping, not overlays, so the result <em>can</em> be transparent.',
        'effect callback' => 'canvasactions_roundedcorners_image',
        'form callback' => 'canvasactions_roundedcorners_form',
        'summary theme' => 'canvasactions_roundedcorners_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_roundedcorners',
        'data' => array(
          'radius' => '3',
          'independent_corners_set' => array(
            'independent_corners' => 0,
            'radii' => array(
              'tl' => 0,
              'tr' => 0,
              'bl' => 0,
              'br' => 0,
            ),
          ),
        ),
        'weight' => '3',
      ),
    ),
  );

  return $styles;
}
