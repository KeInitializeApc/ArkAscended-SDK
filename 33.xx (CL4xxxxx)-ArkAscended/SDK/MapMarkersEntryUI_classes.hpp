#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x988 - 0x900)
// WidgetBlueprintGeneratedClass MapMarkersEntryUI.MapMarkersEntryUI_C
class UMapMarkersEntryUI_C : public UUI_MapMarkersEntry
{
public:
	class UCustomButtonWidget*                   AcceptButton;                                      // 0x900(0x8)(ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               AddMarker;                                         // 0x908(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   CloseButton;                                       // 0x910(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      Coord1;                                            // 0x918(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableTextBox*                      Coord2;                                            // 0x920(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                FrontOverlayAdditive;                              // 0x928(0x8)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_0;                                           // 0x930(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify)
	class UImage*                                Image_42;                                          // 0x938(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, EditorOnly)
	class UImage*                                Image_151;                                         // 0x940(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditorOnly, NoDestructor, ContainsInstancedReference)
	class UEditableTextBox*                      MarkerName;                                        // 0x948(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
	class USlider*                               PinColorSlider;                                    // 0x950(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   RemoveAccept;                                      // 0x958(0x8)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   RemoveClose;                                       // 0x960(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               RemoveMarker;                                      // 0x968(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       TabBgSwitcher;                                     // 0x970(0x8)(Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                TabSplitImgPlayer;                                 // 0x978(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                TabSplitImgRemote;                                 // 0x980(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMapMarkersEntryUI_C* GetDefaultObj();

};

}


