#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0xAF0 - 0x9F0)
// WidgetBlueprintGeneratedClass DedicatedUI.DedicatedUI_C
class UDedicatedUI_C : public UUI_ConsoleDedicated
{
public:
	class UButton*                               AddAdmin;                                          // 0x9F0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               AddtoWitList;                                      // 0x9F8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               AdminUI;                                           // 0xA00(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               BackupSaveDataButton;                              // 0xA08(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               Ban;                                               // 0xA10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               Button_709;                                        // 0xA18(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, Interp, NonTransactional, AutoWeak, ContainsInstancedReference, SimpleDisplay)
	class UButton*                               Button_710;                                        // 0xA20(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, RepNotify, Interp, NonTransactional, AutoWeak, ContainsInstancedReference, SimpleDisplay)
	class UButton*                               Button_711;                                        // 0xA28(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, EditorOnly, AutoWeak, ContainsInstancedReference, SimpleDisplay)
	class UButton*                               Cancel_WhiteList;                                  // 0xA30(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               CancelManualBan;                                   // 0xA38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      DirectMessageText;                                 // 0xA40(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      EditableTextBox_167;                               // 0xA48(0x8)(Edit, ConstParm, Net, EditFixedSize, Config, DisableEditOnInstance, GlobalConfig, EditorOnly, ContainsInstancedReference)
	class UButton*                               Excutewhitelist;                                   // 0xA50(0x8)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                Image_72;                                          // 0xA58(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, EditorOnly, AutoWeak)
	class UImage*                                Image_211;                                         // 0xA60(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UImage*                                Image_255;                                         // 0xA68(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, AssetRegistrySearchable)
	class UImage*                                Image_567;                                         // 0xA70(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditorOnly, NoDestructor, SimpleDisplay)
	class UImage*                                Image_3520;                                        // 0xA78(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected)
	class UButton*                               InviteFriendsButton;                               // 0xA80(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               Kick;                                              // 0xA88(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               ManualBanbuttonexcute;                             // 0xA90(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               ManualBanning;                                     // 0xA98(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               Manualwhite;                                       // 0xAA0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               Quit;                                              // 0xAA8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               RefreshAll;                                        // 0xAB0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               RemoveAdmin;                                       // 0xAB8(0x8)(BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               RemovefromWhiteList;                               // 0xAC0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               SendMessage;                                       // 0xAC8(0x8)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      SteamIDManualBAn;                                  // 0xAD0(0x8)(Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      Steamiftextfieldwhitelist;                         // 0xAD8(0x8)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      TextMessageEditableBox;                            // 0xAE0(0x8)(EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               Unban;                                             // 0xAE8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDedicatedUI_C* GetDefaultObj();

};

}


