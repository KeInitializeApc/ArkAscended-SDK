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
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_A3A[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
struct UAnalyticsBlueprintLibrary_StartSession_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
struct UAnalyticsBlueprintLibrary_SetUserId_Params
{
public:
	class FString                                UserId;                                            // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
struct UAnalyticsBlueprintLibrary_SetSessionId_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
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
	class FString                                Gender;                                            // 0x0(0x10)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
struct UAnalyticsBlueprintLibrary_SetBuildInfo_Params
{
public:
	class FString                                BuildInfo;                                         // 0x0(0x10)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
struct UAnalyticsBlueprintLibrary_SetAge_Params
{
public:
	int32                                        Age;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
struct UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Params
{
public:
	class FString                                ItemID;                                            // 0x0(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	int32                                        ItemQuantity;                                      // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_A8C[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config)
};

// 0x18 (0x18 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
struct UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Params
{
public:
	class FString                                ItemID;                                            // 0x0(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	int32                                        ItemQuantity;                                      // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_A91[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
struct UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Params
{
public:
	class FString                                GameCurrencyType;                                  // 0x0(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        GameCurrencyAmount;                                // 0x10(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A99[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config)
};

// 0x18 (0x18 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
struct UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Params
{
public:
	class FString                                GameCurrencyType;                                  // 0x0(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        GameCurrencyAmount;                                // 0x10(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B1D[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
struct UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Params
{
public:
	class FString                                ProgressType;                                      // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class FString>                        ProgressNames;                                     // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config)
};

// 0x30 (0x30 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
struct UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Params
{
public:
	class FString                                ProgressType;                                      // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                ProgressName;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config)
};

// 0x20 (0x20 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
struct UAnalyticsBlueprintLibrary_RecordProgress_Params
{
public:
	class FString                                ProgressType;                                      // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                ProgressName;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
struct UAnalyticsBlueprintLibrary_RecordItemPurchase_Params
{
public:
	class FString                                ItemID;                                            // 0x0(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class FString                                Currency;                                          // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        PerItemCost;                                       // 0x20(0x4)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ItemQuantity;                                      // 0x24(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
struct UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(ExportObject, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config)
};

// 0x30 (0x30 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
struct UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(ExportObject, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FString                                AttributeName;                                     // 0x10(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                AttributeValue;                                    // 0x20(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
struct UAnalyticsBlueprintLibrary_RecordEvent_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(ExportObject, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes
struct UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Params
{
public:
	class FString                                Error;                                             // 0x0(0x10)(ExportObject, EditFixedSize, Parm, ReturnParm)
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config)
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
	class FString                                GameCurrencyType;                                  // 0x0(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        GameCurrencyAmount;                                // 0x10(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B76[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                RealCurrencyType;                                  // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        RealMoneyCost;                                     // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B78[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                PaymentProvider;                                   // 0x30(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
struct UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Params
{
public:
	class FString                                GameCurrencyType;                                  // 0x0(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        GameCurrencyAmount;                                // 0x10(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B82[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config)
};

// 0x18 (0x18 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
struct UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Params
{
public:
	class FString                                GameCurrencyType;                                  // 0x0(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        GameCurrencyAmount;                                // 0x10(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B85[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
struct UAnalyticsBlueprintLibrary_MakeEventAttribute_Params
{
public:
	class FString                                AttributeName;                                     // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                AttributeValue;                                    // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FAnalyticsEventAttr                   ReturnValue;                                       // 0x20(0x20)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
struct UAnalyticsBlueprintLibrary_GetUserId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
struct UAnalyticsBlueprintLibrary_GetSessionId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


