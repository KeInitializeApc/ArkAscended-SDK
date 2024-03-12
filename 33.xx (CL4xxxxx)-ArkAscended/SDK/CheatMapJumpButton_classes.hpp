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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Lat_Long__Z;                                       // 0x350(0x18)(BlueprintVisible, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                Time_Of_Day;                                       // 0x368(0x10)(ConstParm, ExportObject, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Yaw;                                               // 0x378(0x8)(ZeroConstructor, ReturnParm, Transient, Config)

	static class UClass* StaticClass();
	static class UCheatMapJumpButton_C* GetDefaultObj();

	struct FCheatMapJumpInfo SetMapJumpInfo(double K2Node_VariableSet_Yaw_ImplicitCast);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	class FString ExecuteUbergraph_CheatMapJumpButton(int32* EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5);
};

}


