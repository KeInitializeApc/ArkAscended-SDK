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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UButton*                               BUTTON_FAV;                                        // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Report;                                     // 0x340(0x8)(Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_65;                                          // 0x348(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, Interp, AutoWeak)
	class UImage*                                IMG_Hurt;                                          // 0x350(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Hurt_1;                                        // 0x358(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_Line_1;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	FMulticastInlineDelegateProperty_            ReportEvent;                                       // 0x368(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, SubobjectReference)
	FMulticastInlineDelegateProperty_            FavoriteEvent;                                     // 0x378(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	int64                                        Server_ID;                                         // 0x388(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                Mods_Ids;                                          // 0x390(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  ServerName;                                        // 0x3A0(0x18)(Edit, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_ServerModsSubMenu_C* GetDefaultObj();

	int32 ModListToCombinedString(TArray<int64>* Array, const class FString& ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	void BndEvt__BP_ServerModsSubMenu_BUTTON_FAV_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__BP_ServerModsSubMenu_BUTTON_REPORT_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	class FString CustomEvent_3();
	struct FCFCoreError CustomEvent_4();
	void ReportServer();
	bool ExecuteUbergraph_BP_ServerModsSubMenu(class FString* CallFunc_Conv_TextToString_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1);
	void FavoriteEvent__DelegateSignature();
	void ReportEvent__DelegateSignature();
};

}


