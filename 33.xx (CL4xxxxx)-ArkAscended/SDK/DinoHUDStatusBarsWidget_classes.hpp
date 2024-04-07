#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x4F8 - 0x490)
// WidgetBlueprintGeneratedClass DinoHUDStatusBarsWidget.DinoHUDStatusBarsWidget_C
class UDinoHUDStatusBarsWidget_C : public UHUDStatusBarsWidget
{
public:
	class UProgressBarWidget*                    BuffProgressBar;                                   // 0x490(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x498(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, RepNotify)
	class UProgressBarWidget*                    FoodBar;                                           // 0x4A0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UImage*                                HarvestIcon;                                       // 0x4A8(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    HealthBar;                                         // 0x4B0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UImage*                                IndoorsIcon;                                       // 0x4B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    OxygenBar;                                         // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                RunningImage;                                      // 0x4C8(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    StaminaBar;                                        // 0x4D0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UProgressBarWidget*                    TorpBar;                                           // 0x4D8(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    WaterBar;                                          // 0x4E0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    WeightBar;                                         // 0x4E8(0x8)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, SubobjectReference)
	class UProgressBarWidget*                    XPBar;                                             // 0x4F0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UDinoHUDStatusBarsWidget_C* GetDefaultObj();

	bool IsCurrentlyActive(bool CallFunc_IsVisible_ReturnValue);
};

}


