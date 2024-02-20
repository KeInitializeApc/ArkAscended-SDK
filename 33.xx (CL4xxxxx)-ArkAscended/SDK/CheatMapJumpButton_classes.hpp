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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x348(0x8)(EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Lat_Long__Z;                                       // 0x350(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                Time_Of_Day;                                       // 0x368(0x10)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Yaw;                                               // 0x378(0x8)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config)

	static class UClass* StaticClass();
	static class UCheatMapJumpButton_C* GetDefaultObj();

	double SetMapJumpInfo();
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	class FString ExecuteUbergraph_CheatMapJumpButton(class FString* CallFunc_Conv_TextToString_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FString* CallFunc_Conv_DoubleToString_ReturnValue, class FString* CallFunc_Conv_DoubleToString_ReturnValue_1, class FString* CallFunc_Conv_DoubleToString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_1);
};

}


