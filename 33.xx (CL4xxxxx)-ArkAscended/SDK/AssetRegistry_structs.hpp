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
	class FName                                  Tag;                                               // 0x0(0x8)(Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                Value;                                             // 0x8(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x5 (0x5 - 0x0)
// ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
struct FAssetRegistryDependencyOptions
{
public:
	bool                                         bIncludeSoftPackageReferences;                     // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bIncludeHardPackageReferences;                     // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bIncludeSearchableNames;                           // 0x2(0x1)(ConstParm, ExportObject, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bIncludeSoftManagementReferences;                  // 0x3(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bIncludeHardManagementReferences;                  // 0x4(0x1)(ExportObject, ZeroConstructor, InstancedReference, SubobjectReference)
};

}


