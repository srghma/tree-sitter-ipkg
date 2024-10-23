// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterIpkg",
    products: [
        .library(name: "TreeSitterIpkg", targets: ["TreeSitterIpkg"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterIpkg",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterIpkgTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterIpkg",
            ],
            path: "bindings/swift/TreeSitterIpkgTests"
        )
    ],
    cLanguageStandard: .c11
)
