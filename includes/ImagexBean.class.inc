<?php
/**
 * @file
 */

/**
 * Derived instance of the Bean entity class.
 *
 * This class is set to be the default for all Bean entities by using the
 * `hook_entity_info_alter` module hook that is implemented in the
 * `imagex_bean.module` file.
 *
 * @author Aaron McGowan <aaron@imagexmedia.com>
 * @version 1.0.0
 */
class ImagexBean extends Bean {
  /**
   * Returns the instance of the bean plugin.
   * 
   * @return mixed
   *   Returns an instance of the Bean plugin if it is set, otherwise NULL.
   */
  public function getPlugin() {
    return $this->plugin;
  }
}
