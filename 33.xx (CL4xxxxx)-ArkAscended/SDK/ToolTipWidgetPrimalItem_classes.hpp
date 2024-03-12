#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x668 - 0x628)
// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalItem.ToolTipWidgetPrimalItem_C
class UToolTipWidgetPrimalItem_C : public UPrimalItemToolTipWidget
{
public:
	class UProgressBar*                          CraftingBar;                                       // 0x628(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, SubobjectReference)
	class UProgressBar*                          DurabilityBar;                                     // 0x630(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UProgressBar*                          ItemRatingBar;                                     // 0x638(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMultiUseActionWidget_UI_C*            MultiUseActionWidget_UI;                           // 0x640(0x8)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference)
	class UImage*                                SpoilIcon;                                         // 0x648(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                TheItemIcon;                                       // 0x650(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	class UImage*                                TheItemIconBG;                                     // 0x658(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	class UImage*                                TheItemIconQualityOverlay;                         // 0x660(0x8)(Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UToolTipWidgetPrimalItem_C* GetDefaultObj();

};

}


