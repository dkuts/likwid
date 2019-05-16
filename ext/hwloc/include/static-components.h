#include <private/internal-components.h>
static const struct hwloc_component * hwloc_static_components[] = {
  &hwloc_noos_component,
//  &hwloc_xml_component,
  &hwloc_synthetic_component,
//  &hwloc_xml_nolibxml_component,
  &hwloc_linux_component,
  &hwloc_linuxio_component,
#if defined(__i386__) || defined(__x86_64)
  &hwloc_x86_component,
#endif
  NULL
};
