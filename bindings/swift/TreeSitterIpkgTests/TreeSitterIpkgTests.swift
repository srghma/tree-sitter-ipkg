import XCTest
import SwiftTreeSitter
import TreeSitterIpkg

final class TreeSitterIpkgTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_ipkg())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Ipkg grammar")
    }
}
