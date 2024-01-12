#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct AssetRegistry.TagAndValue
struct FTagAndValue
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                Value;                                             // 0x8(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x5 (0x5 - 0x0)
// ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
struct FAssetRegistryDependencyOptions
{
public:
	bool                                         bIncludeSoftPackageReferences;                     // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIncludeHardPackageReferences;                     // 0x1(0x1)(Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIncludeSearchableNames;                           // 0x2(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIncludeSoftManagementReferences;                  // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIncludeHardManagementReferences;                  // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

}


