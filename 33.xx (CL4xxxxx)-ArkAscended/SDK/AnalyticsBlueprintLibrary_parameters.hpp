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

// 0x18 (0x18 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes
struct UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Params
{
public:
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_DA8[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
struct UAnalyticsBlueprintLibrary_StartSession_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
struct UAnalyticsBlueprintLibrary_SetUserId_Params
{
public:
	class FString                                UserId;                                            // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
struct UAnalyticsBlueprintLibrary_SetSessionId_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation
struct UAnalyticsBlueprintLibrary_SetLocation_Params
{
public:
	class FString                                Location;                                          // 0x0(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender
struct UAnalyticsBlueprintLibrary_SetGender_Params
{
public:
	class FString                                Gender;                                            // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
struct UAnalyticsBlueprintLibrary_SetBuildInfo_Params
{
public:
	class FString                                BuildInfo;                                         // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
struct UAnalyticsBlueprintLibrary_SetAge_Params
{
public:
	int32                                        Age;                                               // 0x0(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
struct UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Params
{
public:
	class FString                                ItemID;                                            // 0x0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	int32                                        ItemQuantity;                                      // 0x10(0x4)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DAE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
};

// 0x18 (0x18 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
struct UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Params
{
public:
	class FString                                ItemID;                                            // 0x0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	int32                                        ItemQuantity;                                      // 0x10(0x4)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DB1[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
struct UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Params
{
public:
	class FString                                GameCurrencyType;                                  // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        GameCurrencyAmount;                                // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_DB4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
};

// 0x18 (0x18 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
struct UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Params
{
public:
	class FString                                GameCurrencyType;                                  // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        GameCurrencyAmount;                                // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_DB5[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
struct UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Params
{
public:
	class FString                                ProgressType;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FString>                        ProgressNames;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
};

// 0x30 (0x30 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
struct UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Params
{
public:
	class FString                                ProgressType;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                ProgressName;                                      // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
};

// 0x20 (0x20 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
struct UAnalyticsBlueprintLibrary_RecordProgress_Params
{
public:
	class FString                                ProgressType;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                ProgressName;                                      // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
struct UAnalyticsBlueprintLibrary_RecordItemPurchase_Params
{
public:
	class FString                                ItemID;                                            // 0x0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class FString                                Currency;                                          // 0x10(0x10)(ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        PerItemCost;                                       // 0x20(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ItemQuantity;                                      // 0x24(0x4)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
struct UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
};

// 0x30 (0x30 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
struct UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                AttributeName;                                     // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                AttributeValue;                                    // 0x20(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
struct UAnalyticsBlueprintLibrary_RecordEvent_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes
struct UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Params
{
public:
	class FString                                Error;                                             // 0x0(0x10)(ExportObject, EditFixedSize, Parm, ReturnParm)
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError
struct UAnalyticsBlueprintLibrary_RecordError_Params
{
public:
	class FString                                Error;                                             // 0x0(0x10)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x40 (0x40 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase
struct UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Params
{
public:
	class FString                                GameCurrencyType;                                  // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        GameCurrencyAmount;                                // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_DBE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                RealCurrencyType;                                  // 0x18(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        RealMoneyCost;                                     // 0x28(0x4)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_DBF[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                PaymentProvider;                                   // 0x30(0x10)(Edit, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
struct UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Params
{
public:
	class FString                                GameCurrencyType;                                  // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        GameCurrencyAmount;                                // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_DC1[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
};

// 0x18 (0x18 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
struct UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Params
{
public:
	class FString                                GameCurrencyType;                                  // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        GameCurrencyAmount;                                // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_DC3[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
struct UAnalyticsBlueprintLibrary_MakeEventAttribute_Params
{
public:
	class FString                                AttributeName;                                     // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                AttributeValue;                                    // 0x10(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FAnalyticsEventAttr                   ReturnValue;                                       // 0x20(0x20)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
struct UAnalyticsBlueprintLibrary_GetUserId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
struct UAnalyticsBlueprintLibrary_GetSessionId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


