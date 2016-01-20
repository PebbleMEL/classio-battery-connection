#include <pebble.h>

// Global variables for displaying text onto the display
static Window *s_main_window;
static TextLayer *s_time_layer;
static TextLayer *s_battery_layer;
static TextLayer *s_connection_layer;

// Function runs every time the battery state changes
static void handle_battery(BatteryChargeState charge_state) {

  if (charge_state.is_charging) {
	// Display something indicating that watch is charging
		
  } else {
	// Display the charge percentage

  }

}

// Function runs per time tick, e.g. second, minute, hour, which is passed in via 'units_changed'
static void handle_second_tick(struct tm* tick_time, TimeUnits units_changed) {

}

// Function runs every time the connection state changes
static void handle_bluetooth(bool connected) {

}

// Function runs when the window is pushed onto the stack, e.g. app load
static void main_window_load(Window *window) {
  Layer *window_layer = window_get_root_layer(window);
  GRect bounds = layer_get_frame(window_layer);

	// Create and initialize the text layers for time, connection and battery

  // Display the time, connection and battery state immediately on start up
 
	// Subscribe to the time service
	
	// Subscribe to the connection service
	
	// Subscribe to the battery service
	
	// Add all text layers to the window layer
	
}

// Function runs when the window is popped off the stack, e.g. app exit
static void main_window_unload(Window *window) {
	// Unsubscribe from system events
	
	// Destroy all global layers

}

// All functions below are typically unchanged for simple apps and watchfaces.
static void init() {
  s_main_window = window_create();
  window_set_background_color(s_main_window, GColorBlack);
  window_set_window_handlers(s_main_window, (WindowHandlers) {
    .load = main_window_load,				// When window is pushed onto screen, e.g. app launch
    .unload = main_window_unload,		// When window is popped off screen, e.g. app close
  });
  window_stack_push(s_main_window, true);
}

static void deinit() {
  window_destroy(s_main_window);
}

int main(void) {
  init();
  app_event_loop();
  deinit();
}
