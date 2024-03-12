#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x918 - 0x8C0)
// WidgetBlueprintGeneratedClass TamingList_Entry.TamingList_Entry_C
class UTamingList_Entry_C : public UTamingListEntryWidget
{
public:
	class UWidgetAnimation*                      InstantHide;                                       // 0x8C0(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x8C8(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      FadeOut;                                           // 0x8D0(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	class UCustomButtonWidget*                   Button;                                            // 0x8D8(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig)
	class UImage*                                DinoIconImage;                                     // 0x8E0(0x8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    FoodBar;                                           // 0x8E8(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UImage*                                GenderIconImage;                                   // 0x8F0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    HealthBar;                                         // 0x8F8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UImage*                                Image_153;                                         // 0x900(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, EditorOnly, NoDestructor, ContainsInstancedReference)
	class UProgressBar*                          TamingBar;                                         // 0x908(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UProgressBar*                          TorporBar;                                         // 0x910(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTamingList_Entry_C* GetDefaultObj();

};

}


