#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x920 - 0x850)
// WidgetBlueprintGeneratedClass DinoGroupsUI.DinoGroupsUI_C
class UDinoGroupsUI_C : public UUI_DinoOrderGroups
{
public:
	class UImage*                                ClassesBottomBorder;                               // 0x850(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                ClassesTopBorder;                                  // 0x858(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UProgressBar*                          ClassSizeBar;                                      // 0x860(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ClearGroupButton;                                  // 0x868(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ClearGroupCharsButton;                             // 0x870(0x8)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ClearGroupClassButton;                             // 0x878(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                CreatureBottomBorder;                              // 0x880(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                CreatureTopBorder;                                 // 0x888(0x8)(Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                DropAllIcon;                                       // 0x890(0x8)(OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      GroupNameEditBox;                                  // 0x898(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UProgressBar*                          GroupSizeBar;                                      // 0x8A0(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                IconImage;                                         // 0x8A8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UImage*                                Image_6;                                           // 0x8B0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional)
	class UImage*                                Image_82;                                          // 0x8B8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor, AutoWeak)
	class UImage*                                Image_141;                                         // 0x8C0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, NonTransactional, EditorOnly, ContainsInstancedReference)
	class UImage*                                Image_307;                                         // 0x8C8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional, NoDestructor, AssetRegistrySearchable)
	class UImage*                                Image_449;                                         // 0x8D0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable)
	class UImage*                                Image_577;                                         // 0x8D8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, AutoWeak, SimpleDisplay)
	class UImage*                                Image_5887;                                        // 0x8E0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable)
	class UImage*                                Image_13391;                                       // 0x8E8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NoDestructor, AutoWeak, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly)
	class UCustomButtonWidget*                   RemoveDinoCharButton;                              // 0x8F0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   RemoveDinoClassButton;                             // 0x8F8(0x8)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   RenameGroupButton;                                 // 0x900(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                SeparatorLineBottom;                               // 0x908(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                SeparatorLineTop;                                  // 0x910(0x8)(Edit, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   SetGroupButton;                                    // 0x918(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDinoGroupsUI_C* GetDefaultObj();

};

}


