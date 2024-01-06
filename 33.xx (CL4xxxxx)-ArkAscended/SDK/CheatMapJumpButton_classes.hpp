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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x348(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               Lat_Long__Z;                                       // 0x350(0x18)(ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class FString                                Time_Of_Day;                                       // 0x368(0x10)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       Yaw;                                               // 0x378(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)

	static class UClass* StaticClass();
	static class UCheatMapJumpButton_C* GetDefaultObj();

	double SetMapJumpInfo();
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	class FText ExecuteUbergraph_CheatMapJumpButton(int32 EntryPoint, class FString* CallFunc_Conv_TextToString_ReturnValue, double CallFunc_BreakVector_Z, class FString* CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue_3, class FString* CallFunc_Concat_StrStr_ReturnValue_4, class FString* CallFunc_Concat_StrStr_ReturnValue_5);
};

}


