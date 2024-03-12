#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x590 - 0x568)
// WidgetBlueprintGeneratedClass CryopodInventoryTooltipWidget.CryopodInventoryTooltipWidget_C
class UCryopodInventoryTooltipWidget_C : public UPrimalCryopodTooltipWidget
{
public:
	class UImage*                                DinoIcon;                                          // 0x568(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                FatherIcon;                                        // 0x570(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                GenderIcon;                                        // 0x578(0x8)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                MotherIcon;                                        // 0x580(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UToolTipWidgetPrimalItem_Inventory_C*  TooltipEmptyCryopod;                               // 0x588(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCryopodInventoryTooltipWidget_C* GetDefaultObj();

};

}


