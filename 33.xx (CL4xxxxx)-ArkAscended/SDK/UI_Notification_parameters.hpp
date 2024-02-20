#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x19 - 0x0)
// Function UI_Notification.UI_Notification_C.SetSecondaryMessage
struct UUI_Notification_C_SetSecondaryMessage_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function UI_Notification.UI_Notification_C.SetMainMessage
struct UUI_Notification_C_SetMainMessage_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_Notification.UI_Notification_C.OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23
struct UUI_Notification_C_OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UI_Notification.UI_Notification_C.OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23
struct UUI_Notification_C_OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x50 (0x50 - 0x0)
// Function UI_Notification.UI_Notification_C.CreateAndPlayAnimation
struct UUI_Notification_C_CreateAndPlayAnimation_Params
{
public:
	class UTexture2D*                            ForcedThumbnail;                                   // 0x0(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2DDynamic*                     Texture;                                           // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	class FString                                ThumbnailUrl;                                      // 0x10(0x10)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FText                                  MainText;                                          // 0x20(0x18)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  SecondaryText;                                     // 0x38(0x18)(Edit, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_Notification.UI_Notification_C.PreConstruct
struct UUI_Notification_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_Notification.UI_Notification_C.Download Thumbnail
struct UUI_Notification_C_Download_Thumbnail_Params
{
public:
	class FString                                ThumbnailUrl;                                      // 0x0(0x10)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xD8 (0xD8 - 0x0)
// Function UI_Notification.UI_Notification_C.ExecuteUbergraph_UI_Notification
struct UUI_Notification_C_ExecuteUbergraph_UI_Notification_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2F7D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_2;                      // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_1;                      // 0x20(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class UTexture2DDynamic*                     Temp_object_Variable;                              // 0x38(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x41(0x1)(Edit, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F7E[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            K2Node_CustomEvent_ForcedThumbnail;                // 0x48(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture;                        // 0x50(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                K2Node_CustomEvent_ThumbnailURL_1;                 // 0x58(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class FText                                  K2Node_CustomEvent_MainText;                       // 0x68(0x18)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  K2Node_CustomEvent_SecondaryText;                  // 0x80(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x98(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x99(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x9A(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_2F80[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0xA0(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xA8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F82[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_CustomEvent_ThumbnailURL;                   // 0xB0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue;                // 0xC0(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xC8(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xC9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0xCA(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0xCB(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_2F83[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0xD0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

}
}


