package com.rnmaps.fabric;


import androidx.annotation.Nullable;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.ViewGroupManager;
import com.facebook.react.uimanager.ViewManagerDelegate;
import com.facebook.react.viewmanagers.RNMapsOverlayManagerDelegate;
import com.facebook.react.viewmanagers.RNMapsOverlayManagerInterface;
import com.rnmaps.maps.MapOverlay;

import java.util.HashMap;
import java.util.Map;

@ReactModule(name = OverlayManager.REACT_CLASS)
public class OverlayManager extends ViewGroupManager<MapOverlay> implements RNMapsOverlayManagerInterface<MapOverlay> {
    public OverlayManager(ReactApplicationContext context) {
        super(context);
    }

    private final RNMapsOverlayManagerDelegate<MapOverlay, OverlayManager> delegate =
            new RNMapsOverlayManagerDelegate<>(this);

    @Override
    public ViewManagerDelegate<MapOverlay> getDelegate() {
        return delegate;
    }

    @Override
    public String getName() {
        return REACT_CLASS;
    }

    @Override
    public MapOverlay createViewInstance(ThemedReactContext context) {
        return new MapOverlay(context);
    }


    public static final String REACT_CLASS = "RNMapsOverlay";

    @Nullable
    @Override
    public Map<String, Object> getExportedCustomBubblingEventTypeConstants() {
        return MapOverlay.getExportedCustomBubblingEventTypeConstants();
    }

    @Nullable
    @Override
    public Map<String, Object> getExportedCustomDirectEventTypeConstants() {
        return new HashMap<>();
    }



    @Override
    public void setZIndex(MapOverlay view, float value) {
        view.setZIndex(value);
    }


    @Override
    public void setBearing(MapOverlay view, float value) {
        view.setBearing(value);
    }

    @Override
    public void setBounds(MapOverlay view, @Nullable ReadableArray value) {
            view.setBounds(value);
    }

    @Override
    public void setImage(MapOverlay view, @Nullable ReadableMap value) {
        if (value != null) {
            view.setImage(value.getString("uri"));
        }
    }


    @Override
    public void setOpacity(MapOverlay view, float value) {
        view.setTransparency(value);
    }

    @Override
    public void setTappable(MapOverlay view, boolean value) {
            view.setTappable(value);
    }
}
