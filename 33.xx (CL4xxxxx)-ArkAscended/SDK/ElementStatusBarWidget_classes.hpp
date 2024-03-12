#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x448 - 0x410)
// WidgetBlueprintGeneratedClass ElementStatusBarWidget.ElementStatusBarWidget_C
class UElementStatusBarWidget_C : public UHUDElementBarWidget
{
public:
	class UImage*                                BoostIcon;                                         // 0x410(0x8)(ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    BootsBar;                                          // 0x418(0x8)(BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    GlovesBar;                                         // 0x420(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    HelmetBar;                                         // 0x428(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    PantsBar;                                          // 0x430(0x8)(Edit, ConstParm, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    ShirtBar;                                          // 0x438(0x8)(ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    ShoulderCannonBar;                                 // 0x440(0x8)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UElementStatusBarWidget_C* GetDefaultObj();

	class APrimalBuff* UpdateBoostIconVisibility(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor, bool* K2Node_DynamicCast_bSuccess_3, bool CallFunc_HideBoostIcon_ShouldSet, bool CallFunc_HideBoostIcon_WithValue);
};

}


