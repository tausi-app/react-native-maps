/**
* This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
*
* Do not edit this file as changes may cause incorrect behavior and will be lost
* once the code is regenerated.
*
* @generated by codegen project: GeneratePropsJavaInterface.js
*/

package com.facebook.react.viewmanagers;

import android.view.View;
import androidx.annotation.Nullable;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.uimanager.ViewManagerWithGeneratedInterface;

public interface RNMapsPolylineManagerInterface<T extends View> extends ViewManagerWithGeneratedInterface {
  void setCoordinates(T view, @Nullable ReadableArray value);
  void setGeodesic(T view, boolean value);
  void setLineCap(T view, @Nullable String value);
  void setLineDashPattern(T view, @Nullable ReadableArray value);
  void setLineJoin(T view, @Nullable String value);
  void setStrokeColor(T view, @Nullable Integer value);
  void setStrokeColors(T view, @Nullable ReadableArray value);
  void setStrokeWidth(T view, float value);
  void setTappable(T view, boolean value);
}
