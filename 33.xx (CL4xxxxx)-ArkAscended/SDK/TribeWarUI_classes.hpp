#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x7F0 - 0x7B0)
// WidgetBlueprintGeneratedClass TribeWarUI.TribeWarUI_C
class UTribeWarUI_C : public UUI_TribeWarEntry
{
public:
	class UCustomButtonWidget*                   AcceptButton;                                      // 0x7B0(0x8)(ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   CloseButton;                                       // 0x7B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      EndDayEditBox;                                     // 0x7C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      EndTimeEditBox;                                    // 0x7C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                FrontOverlayAdditive;                              // 0x7D0(0x8)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_0;                                           // 0x7D8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify)
	class UEditableTextBox*                      StartDayEditBox;                                   // 0x7E0(0x8)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      StartTimeEditBox;                                  // 0x7E8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTribeWarUI_C* GetDefaultObj();

};

}


