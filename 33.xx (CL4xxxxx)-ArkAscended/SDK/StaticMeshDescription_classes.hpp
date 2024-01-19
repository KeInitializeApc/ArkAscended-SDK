#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x2F0 - 0x2F0)
// Class StaticMeshDescription.StaticMeshDescription
class UStaticMeshDescription : public UMeshDescriptionBase
{
public:

	static class UClass* StaticClass();
	static class UStaticMeshDescription* GetDefaultObj();

	int32 SetVertexInstanceUV();
	struct FPolygonGroupID SetPolygonGroupMaterialSlotName(class FName* SlotName);
	int32 GetVertexInstanceUV(const struct FVector2D& ReturnValue);
	struct FVector CreateCube(struct FVector* HalfExtents, const struct FPolygonGroupID& PolygonGroup, const struct FPolygonID& PolygonID_PlusX, const struct FPolygonID& PolygonID_MinusX, const struct FPolygonID& PolygonID_PlusY, const struct FPolygonID& PolygonID_MinusY, const struct FPolygonID& PolygonID_PlusZ, const struct FPolygonID& PolygonID_MinusZ);
};

}


