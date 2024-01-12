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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UButton*                               BUTTON_FAV;                                        // 0x338(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               BUTTON_REPORT;                                     // 0x340(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_65;                                          // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, AutoWeak)
	class UImage*                                IMG_Hurt;                                          // 0x350(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Hurt_1;                                        // 0x358(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_LINE_1;                                        // 0x360(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	FMulticastInlineDelegateProperty_            ReportEvent;                                       // 0x368(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, EditConst, GlobalConfig)
	FMulticastInlineDelegateProperty_            FavoriteEvent;                                     // 0x378(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        Server_ID;                                         // 0x388(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                Mods_Ids;                                          // 0x390(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  ServerName;                                        // 0x3A0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_ServerModsSubMenu_C* GetDefaultObj();

	bool ModListToCombinedString(TArray<int64>* Array, TArray<class FString>* AllStrings, int32* CallFunc_Array_Length_ReturnValue, int64* CallFunc_Array_Get_Item, class FText* CallFunc_Conv_Int64ToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	void BndEvt__BP_ServerModsSubMenu_BUTTON_FAV_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__BP_ServerModsSubMenu_BUTTON_REPORT_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	class FString CustomEvent_3();
	struct FCFCoreError CustomEvent_4();
	void ReportServer();
	FDelegateProperty_ ExecuteUbergraph_BP_ServerModsSubMenu(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& K2Node_CustomEvent_temp_user_token, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText* CallFunc_Conv_Int64ToText_ReturnValue, const class FString& CallFunc_ModListToCombinedString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, bool* CallFunc_CanLaunchURL_ReturnValue);
	void FavoriteEvent__DelegateSignature();
	void ReportEvent__DelegateSignature();
};

}


