#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x3B8 - 0x330)
// WidgetBlueprintGeneratedClass BP_ServerModsSubMenu.BP_ServerModsSubMenu_C
class UBP_ServerModsSubMenu_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UButton*                               BUTTON_FAV;                                        // 0x338(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UButton*                               Button_Report;                                     // 0x340(0x8)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_65;                                          // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, AutoWeak)
	class UImage*                                IMG_Hurt;                                          // 0x350(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Hurt_1;                                        // 0x358(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference, Interp)
	class UImage*                                IMG_Line_1;                                        // 0x360(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	FMulticastInlineDelegateProperty_            ReportEvent;                                       // 0x368(0x10)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            FavoriteEvent;                                     // 0x378(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, InstancedReference, SubobjectReference)
	int64                                        Server_ID;                                         // 0x388(0x8)(BlueprintVisible, ExportObject, Parm, ReturnParm, InstancedReference, SubobjectReference)
	TArray<int64>                                Mods_Ids;                                          // 0x390(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class FText                                  ServerName;                                        // 0x3A0(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_ServerModsSubMenu_C* GetDefaultObj();

	int32 ModListToCombinedString(TArray<int64>* Array, const class FString& ReturnValue, const TArray<class FString>& AllStrings, int32* CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int64 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class FString* CallFunc_JoinStringArray_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	void BndEvt__BP_ServerModsSubMenu_BUTTON_FAV_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__BP_ServerModsSubMenu_BUTTON_REPORT_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void CustomEvent_3(const class FString& Temp_user_token);
	struct FCFCoreError CustomEvent_4();
	void ReportServer();
	bool ExecuteUbergraph_BP_ServerModsSubMenu(int32 EntryPoint, const struct FCFCoreError& K2Node_CustomEvent_error, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& CallFunc_ModListToCombinedString_ReturnValue);
	void FavoriteEvent__DelegateSignature();
	void ReportEvent__DelegateSignature();
};

}


