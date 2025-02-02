package com.rnmaps.fabric.event;

import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;

public class OnPoiClickEvent extends Event<OnPoiClickEvent> {
    public static final String EVENT_NAME = "topPoiClick";
    private final WritableMap payload;

    public OnPoiClickEvent(int surfaceId, int viewId, WritableMap payload) {
        super(surfaceId, viewId);
        this.payload = payload;
    }

    @Override
    public String getEventName() {
        return EVENT_NAME;
    }

    @Override
    public WritableMap getEventData() {
        return payload;
    }
}
