#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETypedElementChildInclusionMethod : uint8
{
	None                           = 0,
	Immediate                      = 1,
	Recursive                      = 2,
	ETypedElementChildInclusionMethod_MAX = 3,
};

enum class ETypedElementSelectionMethod : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	ETypedElementSelectionMethod_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x5 (0x5 - 0x0)
// ScriptStruct TypedElementRuntime.TypedElementSelectionOptions
struct FTypedElementSelectionOptions
{
public:
	bool                                         bAllowHidden;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAllowGroups;                                      // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAllowLegacyNotifications;                         // 0x2(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bWarnIfLocked;                                     // 0x3(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ETypedElementChildInclusionMethod ChildElementInclusionMethod;                       // 0x4(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct TypedElementRuntime.TypedElementSelectionSetState
struct FTypedElementSelectionSetState
{
public:
	TWeakObjectPtr<class UTypedElementSelectionSet> CreatedFromSelectionSet;                           // 0x0(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_219F[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct TypedElementRuntime.TypedElementIsSelectedOptions
struct FTypedElementIsSelectedOptions
{
public:
	bool                                         bAllowIndirect;                                    // 0x0(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct TypedElementRuntime.TypedElementSelectionNormalizationOptions
struct FTypedElementSelectionNormalizationOptions
{
public:
	bool                                         bExpandGroups;                                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFollowAttachment;                                 // 0x1(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


