package com.example.smokeii;

import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.os.Bundle;
import android.widget.Button;
import android.widget.Toast;
import android.widget.AdapterView;
import android.widget.TextView;
import android.content.Intent;
import android.bluetooth.BluetoothAdapter;
import android.widget.ListView;


public class MainActivity extends AppCompatActivity {

    private BluetoothAdapter Bluetooth = null;
    public static String EXTRA_ADDRESS="device_address";
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Button btn;
        btn = (Button)findViewById(R.id.button);
        ListView list;
        list = (ListView)findViewById(R.id.ListView);


        Bluetooth = BluetoothAdapter.getDefaultAdapter();
        if(Bluetooth == null)
        {
            Toast.makeText(getApplicationContext(), "Bluetooth Device Not Available", Toast.LENGTH_LONG).show();
            //finish apk
            finish();
        }
        else
        {
            if (Bluetooth.isEnabled())
            { }
            else
            {
                Intent turnBTon = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
                startActivityForResult(turnBTon,1);
            }
        }};
    private AdapterView.OnItemClickListener myListClickListener = new AdapterView.OnItemClickListener()
    {
        public void onItemClick (AdapterView av, View v, int arg2, long arg3)
        {
            String info = ((TextView) v).getText().toString();
            String address = info.substring(info.length() - 17);
            Intent i = new Intent(MainActivity.this, ledControl.class);
            i.putExtra(EXTRA_ADDRESS, address);
            startActivity(i);
        }
    };
}

