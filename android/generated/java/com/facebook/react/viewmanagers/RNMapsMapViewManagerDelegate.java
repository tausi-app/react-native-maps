/**
* This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
*
* Do not edit this file as changes may cause incorrect behavior and will be lost
* once the code is regenerated.
*
* @generated by codegen project: GeneratePropsJavaDelegate.js
*/

package com.facebook.react.viewmanagers;

import android.view.View;
import androidx.annotation.Nullable;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;

public class RNMapsMapViewManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNMapsMapViewManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
  public RNMapsMapViewManagerDelegate(U viewManager) {
    super(viewManager);
  }
  @Override
  public void setProperty(T view, String propName, @Nullable Object value) {
    switch (propName) {
      case "cacheEnabled":
        mViewManager.setCacheEnabled(view, value == null ? false : (boolean) value);
        break;
      case "camera":
        mViewManager.setCamera(view, (ReadableMap) value);
        break;
      case "compassOffset":
        mViewManager.setCompassOffset(view, (ReadableMap) value);
        break;
      case "followsUserLocation":
        mViewManager.setFollowsUserLocation(view, value == null ? false : (boolean) value);
        break;
      case "poiClickEnabled":
        mViewManager.setPoiClickEnabled(view, value == null ? false : (boolean) value);
        break;
      case "initialCamera":
        mViewManager.setInitialCamera(view, (ReadableMap) value);
        break;
      case "initialRegion":
        mViewManager.setInitialRegion(view, (ReadableMap) value);
        break;
      case "kmlSrc":
        mViewManager.setKmlSrc(view, value == null ? null : (String) value);
        break;
      case "legalLabelInsets":
        mViewManager.setLegalLabelInsets(view, (ReadableMap) value);
        break;
      case "liteMode":
        mViewManager.setLiteMode(view, value == null ? false : (boolean) value);
        break;
      case "googleMapId":
        mViewManager.setGoogleMapId(view, value == null ? null : (String) value);
        break;
      case "googleRenderer":
        mViewManager.setGoogleRenderer(view, (String) value);
        break;
      case "loadingBackgroundColor":
        mViewManager.setLoadingBackgroundColor(view, ColorPropConverter.getColor(value, view.getContext()));
        break;
      case "loadingEnabled":
        mViewManager.setLoadingEnabled(view, value == null ? false : (boolean) value);
        break;
      case "loadingIndicatorColor":
        mViewManager.setLoadingIndicatorColor(view, ColorPropConverter.getColor(value, view.getContext()));
        break;
      case "mapPadding":
        mViewManager.setMapPadding(view, (ReadableMap) value);
        break;
      case "mapType":
        mViewManager.setMapType(view, (String) value);
        break;
      case "maxDelta":
        mViewManager.setMaxDelta(view, value == null ? 0f : ((Double) value).doubleValue());
        break;
      case "maxZoom":
        mViewManager.setMaxZoom(view, value == null ? 0f : ((Double) value).floatValue());
        break;
      case "minDelta":
        mViewManager.setMinDelta(view, value == null ? 0f : ((Double) value).doubleValue());
        break;
      case "minZoom":
        mViewManager.setMinZoom(view, value == null ? 0f : ((Double) value).floatValue());
        break;
      case "moveOnMarkerPress":
        mViewManager.setMoveOnMarkerPress(view, value == null ? true : (boolean) value);
        break;
      case "handlePanDrag":
        mViewManager.setHandlePanDrag(view, value == null ? false : (boolean) value);
        break;
      case "paddingAdjustmentBehavior":
        mViewManager.setPaddingAdjustmentBehavior(view, (String) value);
        break;
      case "pitchEnabled":
        mViewManager.setPitchEnabled(view, value == null ? true : (boolean) value);
        break;
      case "region":
        mViewManager.setRegion(view, (ReadableMap) value);
        break;
      case "rotateEnabled":
        mViewManager.setRotateEnabled(view, value == null ? true : (boolean) value);
        break;
      case "scrollDuringRotateOrZoomEnabled":
        mViewManager.setScrollDuringRotateOrZoomEnabled(view, value == null ? true : (boolean) value);
        break;
      case "scrollEnabled":
        mViewManager.setScrollEnabled(view, value == null ? true : (boolean) value);
        break;
      case "showsBuildings":
        mViewManager.setShowsBuildings(view, value == null ? true : (boolean) value);
        break;
      case "showsCompass":
        mViewManager.setShowsCompass(view, value == null ? true : (boolean) value);
        break;
      case "showsIndoorLevelPicker":
        mViewManager.setShowsIndoorLevelPicker(view, value == null ? false : (boolean) value);
        break;
      case "showsIndoors":
        mViewManager.setShowsIndoors(view, value == null ? true : (boolean) value);
        break;
      case "showsMyLocationButton":
        mViewManager.setShowsMyLocationButton(view, value == null ? true : (boolean) value);
        break;
      case "showsScale":
        mViewManager.setShowsScale(view, value == null ? false : (boolean) value);
        break;
      case "showsUserLocation":
        mViewManager.setShowsUserLocation(view, value == null ? false : (boolean) value);
        break;
      case "tintColor":
        mViewManager.setTintColor(view, ColorPropConverter.getColor(value, view.getContext()));
        break;
      case "toolbarEnabled":
        mViewManager.setToolbarEnabled(view, value == null ? true : (boolean) value);
        break;
      case "userInterfaceStyle":
        mViewManager.setUserInterfaceStyle(view, (String) value);
        break;
      case "userLocationAnnotationTitle":
        mViewManager.setUserLocationAnnotationTitle(view, value == null ? null : (String) value);
        break;
      case "userLocationCalloutEnabled":
        mViewManager.setUserLocationCalloutEnabled(view, value == null ? false : (boolean) value);
        break;
      case "userLocationFastestInterval":
        mViewManager.setUserLocationFastestInterval(view, value == null ? 5000 : ((Double) value).intValue());
        break;
      case "userLocationPriority":
        mViewManager.setUserLocationPriority(view, (String) value);
        break;
      case "userLocationUpdateInterval":
        mViewManager.setUserLocationUpdateInterval(view, value == null ? 5000 : ((Double) value).intValue());
        break;
      case "zoomControlEnabled":
        mViewManager.setZoomControlEnabled(view, value == null ? true : (boolean) value);
        break;
      case "zoomEnabled":
        mViewManager.setZoomEnabled(view, value == null ? true : (boolean) value);
        break;
      case "showsTraffic":
        mViewManager.setShowsTraffic(view, value == null ? false : (boolean) value);
        break;
      case "zoomTapEnabled":
        mViewManager.setZoomTapEnabled(view, value == null ? true : (boolean) value);
        break;
      case "cameraZoomRange":
        mViewManager.setCameraZoomRange(view, (ReadableMap) value);
        break;
      default:
        super.setProperty(view, propName, value);
    }
  }

  @Override
  public void receiveCommand(T view, String commandName, @Nullable ReadableArray args) {
    switch (commandName) {
      case "animateToRegion":
        mViewManager.animateToRegion(view, args.getString(0), args.getInt(1));
        break;
      case "setCamera":
        mViewManager.setCamera(view, args.getString(0));
        break;
      case "animateCamera":
        mViewManager.animateCamera(view, args.getString(0), args.getInt(1));
        break;
      case "fitToElements":
        mViewManager.fitToElements(view, args.getString(0), args.getBoolean(1));
        break;
      case "fitToSuppliedMarkers":
        mViewManager.fitToSuppliedMarkers(view, args.getString(0), args.getString(1), args.getBoolean(2));
        break;
      case "fitToCoordinates":
        mViewManager.fitToCoordinates(view, args.getString(0), args.getString(1), args.getBoolean(2));
        break;
      case "setIndoorActiveLevelIndex":
        mViewManager.setIndoorActiveLevelIndex(view, args.getInt(0));
        break;
    }
  }
}
