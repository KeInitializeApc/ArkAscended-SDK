#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x710 - 0x5D8)
// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalItem_Inventory.ToolTipWidgetPrimalItem_Inventory_C
class UToolTipWidgetPrimalItem_Inventory_C : public UPrimalItemInventoryToolTipWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5D8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadTooltip0;                                   // 0x5E0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadTooltip1;                                   // 0x5E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadTooltip2;                                   // 0x5F0(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadTooltip3;                                   // 0x5F8(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadTooltip4;                                   // 0x600(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadTooltip5;                                   // 0x608(0x8)(Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadTooltip6;                                   // 0x610(0x8)(Edit, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UVerticalBox*                          GamepadTooltips;                                   // 0x618(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UImage*                                Image;                                             // 0x620(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	class UImage*                                Image_1;                                           // 0x628(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_2;                                           // 0x630(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp)
	class UImage*                                Image_3;                                           // 0x638(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional)
	class UImage*                                Image_206;                                         // 0x640(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, EditorOnly, AutoWeak, ContainsInstancedReference)
	class UImage*                                Image_228;                                         // 0x648(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, NonTransactional, AutoWeak, ContainsInstancedReference)
	class UWidgetSwitcher*                       MainInfoSwitcher;                                  // 0x650(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UImage*                                RequirementIcon_1;                                 // 0x658(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	class UImage*                                RequirementIcon_2;                                 // 0x660(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class UImage*                                RequirementIcon_3;                                 // 0x668(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	class UImage*                                RequirementIcon_4;                                 // 0x670(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	class UImage*                                RequirementIcon_5;                                 // 0x678(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	class UImage*                                RequirementIcon_6;                                 // 0x680(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	class UImage*                                RequirementIcon_7;                                 // 0x688(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
	class UImage*                                RequirementIcon_8;                                 // 0x690(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	class UImage*                                RequirementIcon_9;                                 // 0x698(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
	class UImage*                                RequirementIcon_10;                                // 0x6A0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
	class UImage*                                RequirementIcon_11;                                // 0x6A8(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
	class UImage*                                RequirementIcon_12;                                // 0x6B0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	class UImage*                                RequirementIcon_13;                                // 0x6B8(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
	class UImage*                                RequirementIcon_14;                                // 0x6C0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	class UImage*                                RequirementIcon_15;                                // 0x6C8(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NoDestructor)
	class UImage*                                RequirementIcon_16;                                // 0x6D0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
	class UImage*                                RequirementIcon_17;                                // 0x6D8(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
	class UImage*                                RequirementIcon_18;                                // 0x6E0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
	class UImage*                                RequirementIcon_19;                                // 0x6E8(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
	class UImage*                                RequirementIcon_20;                                // 0x6F0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	class UImage*                                TheItemIcon;                                       // 0x6F8(0x8)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UImage*                                TheItemIconBG;                                     // 0x700(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UImage*                                TheItemIconQualityOverlay;                         // 0x708(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UToolTipWidgetPrimalItem_Inventory_C* GetDefaultObj();

	void Construct();
	bool ExecuteUbergraph_ToolTipWidgetPrimalItem_Inventory(int32* EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller);
};

}


