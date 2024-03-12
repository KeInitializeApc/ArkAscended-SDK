#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4A0 (0x15D0 - 0x1130)
// WidgetBlueprintGeneratedClass DinoTrackList_Entry.DinoTrackList_Entry_C
class UDinoTrackList_Entry_C : public UTrackedDinoListEntryWidget
{
public:
	class UWidgetAnimation*                      InstantHide;                                       // 0x1130(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x1138(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      FadeOut;                                           // 0x1140(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	class UProgressBar*                          Bar1Bar;                                           // 0x1148(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UProgressBar*                          Bar2Bar;                                           // 0x1150(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   Button;                                            // 0x1158(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig)
	class UImage*                                DinoIconImage;                                     // 0x1160(0x8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UButton*                               FavoriteButton;                                    // 0x1168(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               FavoriteButton_Selected;                           // 0x1170(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UProgressBar*                          FoodBarHorizontal;                                 // 0x1178(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                GenderIconImage;                                   // 0x1180(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UProgressBar*                          HealthBarHorizontal;                               // 0x1188(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                HoverImage;                                        // 0x1190(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                Image;                                             // 0x1198(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UImage*                                Image_0;                                           // 0x11A0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify)
	class UImage*                                Image_1;                                           // 0x11A8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_2;                                           // 0x11B0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp)
	class UImage*                                Image_161;                                         // 0x11B8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, ContainsInstancedReference)
	class UImage*                                Image_255;                                         // 0x11C0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, AssetRegistrySearchable)
	class UButton*                               POIOptButton;                                      // 0x11C8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               POIOptButton_Selected;                             // 0x11D0(0x8)(Edit, BlueprintVisible, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                TrackedIcon;                                       // 0x11D8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FButtonStyle                          Style_copy;                                        // 0x11E0(0x3F0)(Edit, BlueprintReadOnly, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDinoTrackList_Entry_C* GetDefaultObj();

	void OnPaint(struct FPaintContext* Context, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsHovered_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}


