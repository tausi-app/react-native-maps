
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateEventEmitterH.js
 */
#pragma once

#include <react/renderer/components/view/ViewEventEmitter.h>


namespace facebook::react {
class RNMapsCalloutEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnPressCoordinate {
      double latitude;
    double longitude;
    };

  struct OnPressPosition {
      double x;
    double y;
    };

  struct OnPress {
      std::string action;
    std::string id;
    OnPressCoordinate coordinate;
    OnPressPosition position;
    };
  void onPress(OnPress value) const;
};
class RNMapsCircleEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnPressCoordinate {
      double latitude;
    double longitude;
    };

  struct OnPressPosition {
      double x;
    double y;
    };

  struct OnPress {
      std::string action;
    std::string id;
    OnPressCoordinate coordinate;
    OnPressPosition position;
    };
  void onPress(OnPress value) const;
};
class RNMapsGoogleMapViewEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnIndoorBuildingFocusedIndoorBuilding {
      bool underground;
    int activeLevelIndex;
    };

  struct OnIndoorBuildingFocused {
      OnIndoorBuildingFocusedIndoorBuilding indoorBuilding;
    };

  struct OnIndoorLevelActivatedIndoorLevel {
      int activeLevelIndex;
    std::string name;
    std::string shortName;
    };

  struct OnIndoorLevelActivated {
      OnIndoorLevelActivatedIndoorLevel indoorLevel;
    };

  struct OnKmlReady {
      
    };

  struct OnLongPressCoordinate {
      double latitude;
    double longitude;
    };

  struct OnLongPressPosition {
      double x;
    double y;
    };

  struct OnLongPress {
      OnLongPressCoordinate coordinate;
    OnLongPressPosition position;
    std::string action;
    };

  struct OnMapLoaded {
      
    };

  struct OnMapReady {
      
    };

  struct OnMarkerDeselectCoordinate {
      double latitude;
    double longitude;
    };

  struct OnMarkerDeselect {
      std::string action;
    std::string id;
    OnMarkerDeselectCoordinate coordinate;
    };

  struct OnMarkerDragCoordinate {
      double latitude;
    double longitude;
    };

  struct OnMarkerDragPosition {
      double x;
    double y;
    };

  struct OnMarkerDrag {
      OnMarkerDragCoordinate coordinate;
    OnMarkerDragPosition position;
    std::string id;
    };

  struct OnMarkerDragEndCoordinate {
      double latitude;
    double longitude;
    };

  struct OnMarkerDragEndPosition {
      double x;
    double y;
    };

  struct OnMarkerDragEnd {
      OnMarkerDragEndCoordinate coordinate;
    std::string id;
    OnMarkerDragEndPosition position;
    };

  struct OnMarkerDragStartCoordinate {
      double latitude;
    double longitude;
    };

  struct OnMarkerDragStartPosition {
      double x;
    double y;
    };

  struct OnMarkerDragStart {
      OnMarkerDragStartCoordinate coordinate;
    std::string id;
    OnMarkerDragStartPosition position;
    };

  struct OnMarkerPressCoordinate {
      double latitude;
    double longitude;
    };

  struct OnMarkerPressPosition {
      double x;
    double y;
    };

  struct OnMarkerPress {
      std::string action;
    std::string id;
    OnMarkerPressCoordinate coordinate;
    OnMarkerPressPosition position;
    };

  struct OnMarkerSelectCoordinate {
      double latitude;
    double longitude;
    };

  struct OnMarkerSelect {
      std::string action;
    std::string id;
    OnMarkerSelectCoordinate coordinate;
    };

  struct OnPanDragCoordinate {
      double latitude;
    double longitude;
    };

  struct OnPanDragPosition {
      double x;
    double y;
    };

  struct OnPanDrag {
      OnPanDragCoordinate coordinate;
    OnPanDragPosition position;
    };

  struct OnPoiClickCoordinate {
      double latitude;
    double longitude;
    };

  struct OnPoiClickPosition {
      double x;
    double y;
    };

  struct OnPoiClick {
      std::string placeId;
    std::string name;
    OnPoiClickCoordinate coordinate;
    OnPoiClickPosition position;
    };

  struct OnPressCoordinate {
      double latitude;
    double longitude;
    };

  struct OnPressPosition {
      double x;
    double y;
    };

  struct OnPress {
      OnPressCoordinate coordinate;
    OnPressPosition position;
    std::string action;
    };

  struct OnRegionChangeStartRegion {
      double latitude;
    double longitude;
    double latitudeDelta;
    double longitudeDelta;
    };

  struct OnRegionChangeStart {
      OnRegionChangeStartRegion region;
    bool continuous;
    };

  struct OnRegionChangeRegion {
      double latitude;
    double longitude;
    double latitudeDelta;
    double longitudeDelta;
    };

  struct OnRegionChange {
      OnRegionChangeRegion region;
    bool continuous;
    };

  struct OnRegionChangeCompleteRegion {
      double latitude;
    double longitude;
    double latitudeDelta;
    double longitudeDelta;
    };

  struct OnRegionChangeComplete {
      OnRegionChangeCompleteRegion region;
    bool continuous;
    };

  struct OnUserLocationChangeCoordinate {
      double latitude;
    double longitude;
    double altitude;
    double timestamp;
    Float accuracy;
    Float speed;
    Float heading;
    Float altitudeAccuracy;
    bool isFromMockProvider;
    };

  struct OnUserLocationChangeError {
      std::string message;
    };

  struct OnUserLocationChange {
      OnUserLocationChangeCoordinate coordinate;
    OnUserLocationChangeError error;
    };
  void onIndoorBuildingFocused(OnIndoorBuildingFocused value) const;

  void onIndoorLevelActivated(OnIndoorLevelActivated value) const;

  void onKmlReady(OnKmlReady value) const;

  void onLongPress(OnLongPress value) const;

  void onMapLoaded(OnMapLoaded value) const;

  void onMapReady(OnMapReady value) const;

  void onMarkerDeselect(OnMarkerDeselect value) const;

  void onMarkerDrag(OnMarkerDrag value) const;

  void onMarkerDragEnd(OnMarkerDragEnd value) const;

  void onMarkerDragStart(OnMarkerDragStart value) const;

  void onMarkerPress(OnMarkerPress value) const;

  void onMarkerSelect(OnMarkerSelect value) const;

  void onPanDrag(OnPanDrag value) const;

  void onPoiClick(OnPoiClick value) const;

  void onPress(OnPress value) const;

  void onRegionChangeStart(OnRegionChangeStart value) const;

  void onRegionChange(OnRegionChange value) const;

  void onRegionChangeComplete(OnRegionChangeComplete value) const;

  void onUserLocationChange(OnUserLocationChange value) const;
};
class RNMapsGooglePolygonEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnPressCoordinate {
      double latitude;
    double longitude;
    };

  struct OnPressPosition {
      double x;
    double y;
    };

  struct OnPress {
      std::string action;
    std::string id;
    OnPressCoordinate coordinate;
    OnPressPosition position;
    };
  void onPress(OnPress value) const;
};
class RNMapsMapViewEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnCalloutPressFrame {
      double x;
    double y;
    double width;
    double height;
    };

  struct OnCalloutPressPoint {
      double x;
    double y;
    };

  struct OnCalloutPressCoordinate {
      double latitude;
    double longitude;
    };

  struct OnCalloutPressPosition {
      double x;
    double y;
    };

  struct OnCalloutPress {
      std::string action;
    OnCalloutPressFrame frame;
    std::string id;
    OnCalloutPressPoint point;
    OnCalloutPressCoordinate coordinate;
    OnCalloutPressPosition position;
    };

  struct OnDoublePressCoordinate {
      double latitude;
    double longitude;
    };

  struct OnDoublePressPosition {
      double x;
    double y;
    };

  struct OnDoublePress {
      OnDoublePressCoordinate coordinate;
    OnDoublePressPosition position;
    };

  struct OnIndoorBuildingFocusedIndoorBuilding {
      bool underground;
    int activeLevelIndex;
    };

  struct OnIndoorBuildingFocused {
      OnIndoorBuildingFocusedIndoorBuilding IndoorBuilding;
    };

  struct OnIndoorLevelActivatedIndoorLevel {
      int activeLevelIndex;
    std::string name;
    std::string shortName;
    };

  struct OnIndoorLevelActivated {
      OnIndoorLevelActivatedIndoorLevel IndoorLevel;
    };

  struct OnKmlReady {
      
    };

  struct OnLongPressCoordinate {
      double latitude;
    double longitude;
    };

  struct OnLongPressPosition {
      double x;
    double y;
    };

  struct OnLongPress {
      OnLongPressCoordinate coordinate;
    OnLongPressPosition position;
    std::string action;
    };

  struct OnMapLoaded {
      
    };

  struct OnMapReady {
      
    };

  struct OnMarkerDeselectCoordinate {
      double latitude;
    double longitude;
    };

  struct OnMarkerDeselect {
      std::string action;
    std::string id;
    OnMarkerDeselectCoordinate coordinate;
    };

  struct OnMarkerDragCoordinate {
      double latitude;
    double longitude;
    };

  struct OnMarkerDragPosition {
      double x;
    double y;
    };

  struct OnMarkerDrag {
      OnMarkerDragCoordinate coordinate;
    OnMarkerDragPosition position;
    std::string id;
    };

  struct OnMarkerDragEndCoordinate {
      double latitude;
    double longitude;
    };

  struct OnMarkerDragEndPosition {
      double x;
    double y;
    };

  struct OnMarkerDragEnd {
      OnMarkerDragEndCoordinate coordinate;
    std::string id;
    OnMarkerDragEndPosition position;
    };

  struct OnMarkerDragStartCoordinate {
      double latitude;
    double longitude;
    };

  struct OnMarkerDragStartPosition {
      double x;
    double y;
    };

  struct OnMarkerDragStart {
      OnMarkerDragStartCoordinate coordinate;
    std::string id;
    OnMarkerDragStartPosition position;
    };

  struct OnMarkerPressCoordinate {
      double latitude;
    double longitude;
    };

  struct OnMarkerPressPosition {
      double x;
    double y;
    };

  struct OnMarkerPress {
      std::string action;
    std::string id;
    OnMarkerPressCoordinate coordinate;
    OnMarkerPressPosition position;
    };

  struct OnMarkerSelectCoordinate {
      double latitude;
    double longitude;
    };

  struct OnMarkerSelect {
      std::string action;
    std::string id;
    OnMarkerSelectCoordinate coordinate;
    };

  struct OnPanDragCoordinate {
      double latitude;
    double longitude;
    };

  struct OnPanDragPosition {
      double x;
    double y;
    };

  struct OnPanDrag {
      OnPanDragCoordinate coordinate;
    OnPanDragPosition position;
    };

  struct OnPoiClickCoordinate {
      double latitude;
    double longitude;
    };

  struct OnPoiClickPosition {
      double x;
    double y;
    };

  struct OnPoiClick {
      std::string placeId;
    std::string name;
    OnPoiClickCoordinate coordinate;
    OnPoiClickPosition position;
    };

  struct OnPressCoordinate {
      double latitude;
    double longitude;
    };

  struct OnPressPosition {
      double x;
    double y;
    };

  struct OnPress {
      OnPressCoordinate coordinate;
    OnPressPosition position;
    std::string action;
    };

  struct OnRegionChangeStartRegion {
      double latitude;
    double longitude;
    double latitudeDelta;
    double longitudeDelta;
    };

  struct OnRegionChangeStart {
      OnRegionChangeStartRegion region;
    bool continuous;
    };

  struct OnRegionChangeRegion {
      double latitude;
    double longitude;
    double latitudeDelta;
    double longitudeDelta;
    };

  struct OnRegionChange {
      OnRegionChangeRegion region;
    bool continuous;
    };

  struct OnRegionChangeCompleteRegion {
      double latitude;
    double longitude;
    double latitudeDelta;
    double longitudeDelta;
    };

  struct OnRegionChangeComplete {
      OnRegionChangeCompleteRegion region;
    bool continuous;
    };

  struct OnUserLocationChangeCoordinate {
      double latitude;
    double longitude;
    double altitude;
    double timestamp;
    Float accuracy;
    Float speed;
    Float heading;
    Float altitudeAccuracy;
    bool isFromMockProvider;
    };

  struct OnUserLocationChangeError {
      std::string message;
    };

  struct OnUserLocationChange {
      OnUserLocationChangeCoordinate coordinate;
    OnUserLocationChangeError error;
    };
  void onCalloutPress(OnCalloutPress value) const;

  void onDoublePress(OnDoublePress value) const;

  void onIndoorBuildingFocused(OnIndoorBuildingFocused value) const;

  void onIndoorLevelActivated(OnIndoorLevelActivated value) const;

  void onKmlReady(OnKmlReady value) const;

  void onLongPress(OnLongPress value) const;

  void onMapLoaded(OnMapLoaded value) const;

  void onMapReady(OnMapReady value) const;

  void onMarkerDeselect(OnMarkerDeselect value) const;

  void onMarkerDrag(OnMarkerDrag value) const;

  void onMarkerDragEnd(OnMarkerDragEnd value) const;

  void onMarkerDragStart(OnMarkerDragStart value) const;

  void onMarkerPress(OnMarkerPress value) const;

  void onMarkerSelect(OnMarkerSelect value) const;

  void onPanDrag(OnPanDrag value) const;

  void onPoiClick(OnPoiClick value) const;

  void onPress(OnPress value) const;

  void onRegionChangeStart(OnRegionChangeStart value) const;

  void onRegionChange(OnRegionChange value) const;

  void onRegionChangeComplete(OnRegionChangeComplete value) const;

  void onUserLocationChange(OnUserLocationChange value) const;
};
class RNMapsMarkerEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnCalloutPressFrame {
      double x;
    double y;
    double width;
    double height;
    };

  struct OnCalloutPressPoint {
      double x;
    double y;
    };

  struct OnCalloutPress {
      std::string action;
    std::string id;
    OnCalloutPressFrame frame;
    OnCalloutPressPoint point;
    };

  struct OnDeselectCoordinate {
      double latitude;
    double longitude;
    };

  struct OnDeselectPosition {
      double x;
    double y;
    };

  struct OnDeselect {
      std::string action;
    std::string id;
    OnDeselectCoordinate coordinate;
    OnDeselectPosition position;
    };

  struct OnDragCoordinate {
      double latitude;
    double longitude;
    };

  struct OnDrag {
      std::string id;
    OnDragCoordinate coordinate;
    };

  struct OnDragEndCoordinate {
      double latitude;
    double longitude;
    };

  struct OnDragEnd {
      std::string id;
    OnDragEndCoordinate coordinate;
    };

  struct OnDragStartCoordinate {
      double latitude;
    double longitude;
    };

  struct OnDragStart {
      std::string id;
    OnDragStartCoordinate coordinate;
    };

  struct OnPressCoordinate {
      double latitude;
    double longitude;
    };

  struct OnPressPosition {
      double x;
    double y;
    };

  struct OnPress {
      std::string action;
    std::string id;
    OnPressCoordinate coordinate;
    OnPressPosition position;
    };

  struct OnSelectCoordinate {
      double latitude;
    double longitude;
    };

  struct OnSelectPosition {
      double x;
    double y;
    };

  struct OnSelect {
      std::string action;
    std::string id;
    OnSelectCoordinate coordinate;
    OnSelectPosition position;
    };
  void onCalloutPress(OnCalloutPress value) const;

  void onDeselect(OnDeselect value) const;

  void onDrag(OnDrag value) const;

  void onDragEnd(OnDragEnd value) const;

  void onDragStart(OnDragStart value) const;

  void onPress(OnPress value) const;

  void onSelect(OnSelect value) const;
};
class RNMapsPolylineEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnPressCoordinate {
      double latitude;
    double longitude;
    };

  struct OnPressPosition {
      double x;
    double y;
    };

  struct OnPress {
      std::string action;
    std::string id;
    OnPressCoordinate coordinate;
    OnPressPosition position;
    };
  void onPress(OnPress value) const;
};
} // namespace facebook::react
