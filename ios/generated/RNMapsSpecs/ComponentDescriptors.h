
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateComponentDescriptorH.js
 */

#pragma once

#include "ShadowNodes.h"
#include <react/renderer/core/ConcreteComponentDescriptor.h>
#include <react/renderer/componentregistry/ComponentDescriptorProviderRegistry.h>

namespace facebook::react {

using RNMapsCalloutComponentDescriptor = ConcreteComponentDescriptor<RNMapsCalloutShadowNode>;
using RNMapsCircleComponentDescriptor = ConcreteComponentDescriptor<RNMapsCircleShadowNode>;
using RNMapsGoogleMapViewComponentDescriptor = ConcreteComponentDescriptor<RNMapsGoogleMapViewShadowNode>;
using RNMapsGooglePolygonComponentDescriptor = ConcreteComponentDescriptor<RNMapsGooglePolygonShadowNode>;
using RNMapsMapViewComponentDescriptor = ConcreteComponentDescriptor<RNMapsMapViewShadowNode>;
using RNMapsMarkerComponentDescriptor = ConcreteComponentDescriptor<RNMapsMarkerShadowNode>;
using RNMapsPolylineComponentDescriptor = ConcreteComponentDescriptor<RNMapsPolylineShadowNode>;

void RNMapsSpecs_registerComponentDescriptorsFromCodegen(
  std::shared_ptr<const ComponentDescriptorProviderRegistry> registry);

} // namespace facebook::react
