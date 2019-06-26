public class CordovaIntercomPlugin extends CordovaPlugin {
    private static final String TAG = "CordovaIntercomPlugin";

    public void initialize(CordovaInterface cordova, CordovaWebView webView) {
        super.initialize(cordova, webView);

        Log.d(TAG, "Initializing CordovaIntercomPlugin");
    }

    public boolean execute(String action, JSONArray args, final CallbackContext callbackContext) throws JSONException {
        if(action.equals("echo")) {
            String phrase = args.getString(0);

            Log.d(TAG, phrase);
        } else if(action.equals("getDate")) {
            final PluginResult result = new PluginResult(PluginResult.Status.OK, (new Date()).toString());

            callbackContext.sendPluginResult(result);
        }

        return true;
    }

}
