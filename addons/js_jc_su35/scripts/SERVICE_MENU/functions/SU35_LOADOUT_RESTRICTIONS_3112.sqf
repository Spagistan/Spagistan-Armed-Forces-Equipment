	If (!Local Player) ExitWith {};
    	Private ["_Station_5_Index","_FA18"];
    	_SU35 = vehicle player; 

	_Station_12_Index = lbCurSel 3112;

	Switch (_Station_12_Index) Do
        {

            	case 0:
            	{

			lbClear 3111;
			{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY",
              			"R-73 Archer",
	      			"R-77 Adder",
				"KH-29 Kedge",
				"KAB-500L"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 3;
           
            	};
            	case 1:
            	{
			lbClear 3111;
			{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY",
              			"R-73 Archer",
	      			"R-77 Adder",
				"KH-29 Kedge",
				"KAB-500L"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 3;
            	};

		case 2:
            	{
			lbClear 3111;
			{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY",
              			"R-73 Archer",
	      			"R-77 Adder",
				"KH-29 Kedge",
				"KAB-500L"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 3;
            	};
		
		case 3:
            	{
			lbClear 3111;
			{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY",
              			"R-73 Archer",
	      			"R-77 Adder",
				"KH-29 Kedge",
				"KAB-500L"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 3;
            	};

		case 4:
            	{
			lbClear 3111;
			{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY",
              			"R-73 Archer",
	      			"R-77 Adder",
				"KH-29 Kedge",
				"KAB-500L"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 3;
            	};

		case 5:
            	{
			lbClear 3111;
			{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;

            	};

      	}; 