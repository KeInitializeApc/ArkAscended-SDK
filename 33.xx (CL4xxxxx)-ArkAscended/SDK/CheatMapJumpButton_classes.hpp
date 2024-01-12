#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x380 - 0x330)
// WidgetBlueprintGeneratedClass CheatMapJumpButton.CheatMapJumpButton_C
class UCheatMapJumpButton_C : public UUI_DebugSpawnMenuEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x348(0x8)(Edit, ExportObject, EditFixedSize, Transient, EditConst, SubobjectReference)
	struct FVector                               Lat_Long__Z;                                       // 0x350(0x18)(ExportObject, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
	class FString                                Time_Of_Day;                                       // 0x368(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       Yaw;                                               // 0x378(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)

	static class UClass* StaticClass();
	static class UCheatMapJumpButton_C* GetDefaultObj();

	double SetMapJumpInfo();
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	class FText ExecuteUbergraph_CheatMapJumpButton(const class FString& CallFunc_Conv_TextToString_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5);
};

}


